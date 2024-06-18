#include <iostream>
using namespace std;

enum License
{
    yes = 1,
    no = 2
};

enum Recommendation
{
    Yes = 1,
    No = 2
};

struct UserInfo
{
    int age;
    License hasLicense;
    Recommendation hasRcommendation;
};

UserInfo readUserData()
{
    UserInfo info;
    int choice1;
    int choice2;
    cout << "Enter your age: ";
    cin >> info.age;
    cout << "Do you have a dirver license?" << "\n"
         << "(1) Yes" << "\n"
         << "(2) No" << endl;
    cin >> choice1;
    info.hasLicense = (License)choice1;
    cout << "Do you have recommendation?" << "\n"
         << "(1) Yes" << "\n"
         << "(2) No" << endl;
    cin >> choice2;
    info.hasRcommendation = (Recommendation)choice2;
    return info;
}

bool isAccepted(UserInfo info)
{
    return info.hasRcommendation == Recommendation::Yes ? true : info.age >= 21 && info.hasLicense == License::yes;
}

void printResult(bool isHired)
{
    if (isHired)
    {
        cout << "Hired" << endl;
    }
    else
    {
        cout << "Rejected" << endl;
    }
}

int main()
{
    printResult(isAccepted(readUserData()));
    return 0;
}
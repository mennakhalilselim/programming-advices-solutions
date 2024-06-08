#include <iostream>
using namespace std;

enum License
{
    yes = 1,
    no = 2
};

struct UserInfo
{
    int age;
    License hasLicense;
};
UserInfo readUserData()
{
    UserInfo info;
    int choice;
    cout << "Enter your age: ";
    cin >> info.age;
    cout << "Do you have a dirver license?" << "\n"
         << "(1) Yes" << "\n"
         << "(2) No" << endl;
    cin >> choice;
    info.hasLicense = (License)choice;
    return info;
}

bool isAccepted(UserInfo info)
{
    return info.age >= 21 && info.hasLicense == License::yes;
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
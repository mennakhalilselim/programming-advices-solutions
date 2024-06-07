#include <iostream>
using namespace std;

struct FullName
{
    string fname;
    string lname;
};

FullName readName()
{
    FullName name;
    cout << "Enter you first name: ";
    cin >> name.fname;
    cout << "Enter you last name: ";
    cin >> name.lname;
    return name;
}

string concateName(FullName name)
{
    return name.fname + ' ' + name.lname + '\n';
}

void printName(string name)
{
    cout << name;
}

int main()
{
    printName(concateName(readName()));
    return 0;
}
#include <iostream>
#include <cmath>
using namespace std;

string readPassword()
{
    string password;
    cout << "Enter 3 letters password (ALL CAPS): ";
    cin >> password;
    return password;
}

void guessPassword(string password)
{
    int counter = 0;
    for (int i = 65; i <= 90; i++)
    {
        for (int j = 65; j <= 90; j++)
        {
            for (int k = 65; k <= 90; k++)
            {
                string guessedPassword;
                guessedPassword += char(i);
                guessedPassword += char(j);
                guessedPassword += char(k);
                counter++;
                cout << "Trial [" << counter << "]: " << guessedPassword << endl;
                if (guessedPassword == password)
                {
                    cout << "Password is " << guessedPassword << endl;
                    cout << "Found after " << counter << " trials" << endl;
                    return;
                }
            }
        }
    }

    cout << "NOT FOUND";
}

int main()
{
    guessPassword(readPassword());
    return 0;
}

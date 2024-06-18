#include <iostream>
using namespace std;

string readText(string message)
{
    cout << message;
    string text;
    getline(cin, text);
    return text;
}

short readShift(string message)
{
    short shift;
    cout << message;
    cin >> shift;
    return shift % 26;
}

// TODO: small letters exceed ASCII table range
string encrypt(string text, short shift)
{
    string encryptedText = "";
    for (int i = 0; i < text.length(); i++)
    {
        char ch = text[i];
        if (islower(ch))
        {
            ch += shift;
            if (ch > 'z')
            {
                ch -= 26;
            }
        }
        else if (isupper(ch))
        {
            ch += shift;
            if (ch > 'Z')
            {
                ch -= 26;
            }
        }
        encryptedText += ch;
    }
    return encryptedText;
}

string decrypt(string encryptedText, short shift)
{
    string decryptedText = "";
    for (int i = 0; i < encryptedText.length(); i++)
    {
        char ch = encryptedText[i];
        if (islower(ch))
        {
            ch -= shift;
            if (ch < 'a')
            {
                ch += 26;
            }
        }
        else if (isupper(ch))
        {
            ch -= shift;
            if (ch < 'A')
            {
                ch += 26;
            }
        }
        decryptedText += ch;
    }
    return decryptedText;
}

int main()
{
    string text = readText("Enter text: ");
    short shift = readShift("Enter shift: ");
    cout << "Original text: " << text << endl;
    cout << "Encrypted text: " << encrypt(text, shift) << endl;
    cout << "Decrypted text: " << decrypt(encrypt(text, shift), shift) << endl;
    return 0;
}
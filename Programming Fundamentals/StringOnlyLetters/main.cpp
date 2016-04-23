#include <iostream>
#include <string>
using namespace std;

string stringToLowercase(string input)
{
    string output;
    int i;
    for (i = 0; input[i] != '\0'; i++)
    {
        if (input[i] >= 'A' && input[i] <= 'Z')
        {
            output += input[i] + 32;
        }
        else
        {
            output += input[i];
        }
    }
    return output;
}

bool isLetter(char c)
{
    if (c >= 'A' && c <= 'Z')
    {
        return true;
    }
    if (c >= 'a' && c <= 'z')
    {
        return true;
    }
    return false;
}

bool isStringLettersOnly(string text)
{
    int i;
    for (i = 0; text[i] != '\0'; i++)
    {
        if (!isLetter(text[i]) && text[i] != ' ')
        {
            return false;
        }
    }
    return true;
}

int main()
{
    string text;
    getline(cin, text);
    if (isStringLettersOnly(text))
    {
        cout << stringToLowercase(text) << endl;;
    }
    else
    {
        cout << "The string can only contain letters." << endl;
    }
    return 0;
}

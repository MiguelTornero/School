/*
Palindrome.cpp

This program asks the user to provide a string, then, taking only into
account the alphanumeric characters and not being case-sensitive,
outputs if the string provided is a palindrome or not.

2016-04-19
Miguel Angel Tornero Carrillo A00820449
*/

#include <iostream>
#include <string>

using namespace std;

/*
isPalindrome function

Checks if a string is a true palindrome, if it is
then it returns a boolean with a 'true' value,
otherwise it returns a 'false' value.

Parameters:
    text:    The string to check

Returns:
    A boolean value.
*/

bool isPalindrome(string text)
{
    int i, j, cap = 0;
    cap = text.length();
    for (i = 0, j = cap - 1; i < j; i++, j--)
    {
        if(text[i] != text[j])
        {
            return false;
        }
    }
    return true;
}

/*
stringToLowercase function

Takes a string and changes all uppercase characters,
with an ASCII value of 65 to 90, to their
correspondent lowercase character (equal to their
ASCII value plus 32)

Parameters:
    input:   The string to change

Returns:
    output:  The changed string
*/

string stringToLowercase(string input)
{
    string output;
    int i;
    for (i = 0; input[i] != '\0'; i++)
    {
        if (input[i] >= 65 && input[i] <= 90)
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

/*
isAlphanumeric function

Checks if a character is a alphanumeric character, that is,
either a number (ASCII value of 48 to 57), an uppercase letter
(ASCII value of 65 to 90), or a lowercase letter (ASCII value
of 97 to 122), and returns a boolean with a 'true' value if it
is, and a 'false' value otherwise.

Parameters:
    c:      Character to check.

Returns:
    A boolean value.
*/

bool isAlphanumeric(char c)
{
    if (c >= 48 && c <= 57)
    {
        return true;
    }
    if (c >= 65 && c <= 90)
    {
        return true;
    }
    if (c >= 97 && c <= 122)
    {
        return true;
    }
    return false;
}

/*
stringToAlphanumeric function

Removes all non alphanumeric characters of a string,
including spaces, dots, and commas, with the help of
the isAlphanumeric function.

Parameters:
    input   String to change

Returns:
    output  Changed string
*/

string stringToAlphanumeric(string input)
{
    string output;
    int i;
    for (i = 0; input[i] != '\0'; i++)
    {
        if (isAlphanumeric(input[i]))
        {
            output += input[i];
        }
    }
    return output;
}

/*
Main Function

Gets the string from the user, and checks if the string contains
any alphanumeric characters. If it doesn't then it outputs and error
message. If it does, it outputs a message saying if the string
provided is a palindrome or not.

Parameters:
    none

Returns:
    Integer with the value of 0.
*/

int main()
{
    string text, raw_text;
    cout << "Enter some text:" <<endl;
    getline(cin, text);
    raw_text = stringToAlphanumeric(text);
    if (raw_text == "")
    {
        cout << "Please use some alphanumeric characters." << endl;
    }
    else
    {
        raw_text = stringToLowercase(raw_text);
        if (isPalindrome(raw_text))
        {
            cout << "\"" << text << "\" is a palindrome." << endl;
        }
        else
        {
            cout << "\"" << text << "\" is NOT a palindrome." << endl;
        }
    }
    return 0;
}

#include <iostream>
#include <string>

using namespace std;

string stringRemoveChar(string input, char c)
{
    int i;
    string output;
    for (i = 0; input[i] != '\0'; i++)
    {
        if (input[i] != c)
        {
            output += input[i];
        }
    }
    return output;
}

int main()
{
    string text;
    char c;
    getline(cin, text);
    cin >> c;
    cout << stringRemoveChar(text, c);
    return 0;
}

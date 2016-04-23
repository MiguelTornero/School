#include <iostream>
#include <string>

using namespace std;

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

int main()
{
    cout << stringToLowercase("AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsTtUuVvWwXxYyZz");
    return 0;
}

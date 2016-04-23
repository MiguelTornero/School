#include <iostream>

using namespace std;

int stringLength(string s)
{
    int i;
    for (i = 0; s[i] != '\0'; i++)
    {
    }
    return i;
}

int main()
{
    int cap;
    string s;
    getline(cin, s);
    cap = stringLength(s);
    cout << cap;
    return 0;
}

#include <iostream>

using namespace std;

bool equalString(string s1, string s2)
{
    bool b = false;
    if (s1 == s2)
    {
        b = true;
    }
    return b;
}
int main()
{
    string s1, s2;
    bool same;
    getline(cin, s1);
    getline(cin, s2);
    same = equalString(s1, s2);
    if (same)
    {
        cout << "They are equal";
    }
    else
    {
        cout << "They are not equal";
    }
    return 0;
}

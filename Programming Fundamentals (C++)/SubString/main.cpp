#include <iostream>

using namespace std;
string mySubString(string s, int index, int pos)
{
    string subs = "";
    int i;
    pos += index;
    if (pos > s.length() || pos < index)
    {
        pos = s.length();
    }
    for (i = index; i < pos; i++)
    {
        subs += s[i];
    }
    return subs;
}
int main()
{
    string sString;
    int num1, num2;
    getline(cin, sString);
    cin >> num1 >> num2;
    cout << mySubString(sString, num1, num2);
    return 0;
}

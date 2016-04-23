#include <iostream>
#include <string>

using namespace std;

int main()
{
    int i;
    long cap;
    string s;
    getline(cin, s);
    cap = s.length();
    for (i = cap - 1; i >= 0; i--)
    {
        cout << s[i];
    }
    return 0;
}

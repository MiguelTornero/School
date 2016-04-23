#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s, sc;
    char c;
    getline(cin, s);
    cin >> c;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == c)
        {
            cout << i +1 << " ";
        }
    }
    return 0;
}

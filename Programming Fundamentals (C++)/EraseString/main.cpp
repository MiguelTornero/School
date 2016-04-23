#include <iostream>

using namespace std;
string MyStringErase(string s, int index, int char_num)
{
    int i, max_index, length;
    string result;
    length = s.length();
    max_index = index + char_num - 1;
    if (max_index < index || max_index > length)
    {
        max_index = length;
    } //validate
    for (i = 0; i < length; i++)
    {
        if (i < index || i > max_index)
        {
            result += s[i];
        }
    }
    return result;
}
int main()
{
    string s;
    int i1, i2;
    cout << "Enter your string:" << endl;
    getline(cin, s);
    cout << "TODO" << endl;
    cin >> i1 >> i2;
    cout << MyStringErase(s, i1, i2);
    return 0;
}

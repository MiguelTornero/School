#include <iostream>
#include <string>

using namespace std;

int main()
{
    string *sNames;
    int cap = 5;
    sNames = new string[cap];
    for (int i = 0; i < 5; i++)
    {
        //cin >> sNames[i];
        getline(cin, sNames[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        cout << sNames[i] << " ";
    }
    return 0;
}

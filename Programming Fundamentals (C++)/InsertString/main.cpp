#include <iostream>
#include <string>

using namespace std;

string myStringInsert(string initial_string,int index, string insert_string)
{
    string end_string;
    int i, lenght;
    lenght = initial_string.length();
    if (index > lenght || index < 0)
    {
        index = lenght;
    }
    for (i = 0; i < index; i++)
    {
        end_string += initial_string[i];
    }
    end_string += insert_string;
    for (i = index; i < lenght; i++)
    {
        end_string += initial_string[i];
    }
    return end_string;
}

int main()
{
    string s1, s2;
    int i;
    getline(cin, s1);
    cin >> i;
    cin.sync();
    getline(cin, s2);
    cout << myStringInsert(s1, i, s2);
    return 0;
}

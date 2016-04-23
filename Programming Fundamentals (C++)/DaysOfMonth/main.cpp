#include <iostream>

using namespace std;
int iMonth;
int main()
{
    cout << "Enter the number of the month:" << endl;
    cin >> iMonth;
    switch (iMonth)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        cout << "That month has 31 days";
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        cout << "That month has 30 days";
        break;
    case 2:
        cout << "That month has 28 (or 29) days";
        break;
    default:
        cout << "That's not a valid month";
    }
    return 0;
}

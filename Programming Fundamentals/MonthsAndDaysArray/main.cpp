#include <iostream>

using namespace std;

int main()
{
    string sArrMonths[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    int iArrDays[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}, i, j;
    i = 0;
    do
    {
        cout << sArrMonths[i] << endl;
        j = 1;
        do
        {
            cout << j << ' ';
            j++;
        }
        while(j <= iArrDays[i]);
        cout << endl;
        i++;
    }
    while (i < 12);
    return 0;
}

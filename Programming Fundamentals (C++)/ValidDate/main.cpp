#include <iostream>

using namespace std;

int iDay, iMonth, iYear, iValidDays;
bool bValidDate = true;
int main()
{
    cout << "Enter the number of the day, month and year:\n";
    cin >> iDay >> iMonth >> iYear;
    switch (iMonth)
    {
    case 4:
    case 6:
    case 9:
    case 11:
        iValidDays = 30;
        break;
    case 2:
        if (iYear % 4 == 0)
        {
            iValidDays = 29;
        }
        else
        {
            iValidDays = 28;
        }
        break;
    default:
        iValidDays = 31;
    }
    if (iDay == 29 && iValidDays == 28)
    {
        bValidDate = false;
        cout << "Invalid Date, this year is not leap\n";
    }
    else
    {
        if (iDay <= 0 || iDay > iValidDays)
        {
            bValidDate = false;
            cout << "Invalid Date, wrong day\n";
        }
    }
    if (iMonth <= 0 || iMonth > 12)
    {
        bValidDate = false;
        cout << "Invalid Date, wrong month\n";
    }
    if (iYear <= 0)
    {
        bValidDate = false;
        cout << "Invalid Date, wrong year\n";
    }
    if (bValidDate == true)
    {
        cout << "Valid date\n";
    }
    return 0;
}

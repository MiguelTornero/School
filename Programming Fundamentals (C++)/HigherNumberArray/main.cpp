#include <iostream>

using namespace std;

int main()
{
    int iCapacity, *iArrNum, iHighest = 0, iTemp, i;
    cout << "Enter how many numbers you want to enter:" << endl;
    cin >> iCapacity;
    iArrNum = new int[iCapacity];
    cout << "Enter the numbers:" << endl;
    i = 0;
    while (i < iCapacity)
    {
        cin >> iTemp;
        if (iTemp < 0)
        {
            cout << "Please use positive numbers." << endl;
        }
        else
        {
            iArrNum[i] = iTemp;
            if (iArrNum[i] > iHighest)
            {
                iHighest = iArrNum[i];
            }
            i++;
        }
    }
    cout << "The highest number is: " << iHighest;
    return 0;
}

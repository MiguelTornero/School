#include <iostream>

using namespace std;

int main()
{
    int iCap, *iArr, iTemp, i, j;
    cout << "How many numbers do you want to enter?" << endl;
    cin >> iCap;
    iArr = new int[iCap];
    cout << "Enter the numbers" << endl;
    for (i = 0; i < iCap; i++)
    {
        cin >> iArr[i];
    }
    for (i = 0; i < iCap - 1; i++) // iCap - 1 prevents an unnecessary loop
    {
        for (j = i + 1; j < iCap; j++)
        {
            if (iArr[j] < iArr[i])
            {
                iTemp = iArr[i];
                iArr[i] = iArr[j];
                iArr[j] = iTemp;
            }
        }
    }
    cout << "The numbers ordered from lowest to highest are:" << endl;
    for (i = 0; i < iCap; i++)
    {
        cout << iArr[i] << " ";
    }
    cout << endl;
    return 0;
}

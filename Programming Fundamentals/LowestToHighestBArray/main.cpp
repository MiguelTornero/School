#include <iostream>

using namespace std;

int main()
{
    int i, j, iColumns, iRows, iCap, iTemp, iCount;
    cout << "Enter the rows and columns for the array:" << endl;
    cin >> iRows >> iColumns;
    iCap = iRows * iColumns;
    int iBArray[iRows][iColumns], iArray[iCap];
    cout << "Fill the array:" << endl;
    for (i = 0; i < iRows; i++)
    {
        for (j = 0; j < iColumns; j++)
        {
            cin >> iBArray[i][j];
        }
    }
    iCount = 0;
    for (i = 0; i < iRows; i++)
    {
        for (j = 0; j < iColumns; j++)
        {
            iArray[iCount] = iBArray[i][j];
            iCount++;
        }
    }
    for (i = 0; i < iCap - 1; i++)
    {
        for (j = i + 1; j < iCap; j++)
        {
            if (iArray[i] > iArray[j])
            {
                iTemp = iArray[i];
                iArray[i] = iArray[j];
                iArray[j] = iTemp;
            }
        }
    }
    iCount = 0;
    for (i = 0; i < iRows; i++)
    {
        for (j = 0; j < iColumns; j++)
        {
            iBArray[i][j] = iArray[iCount];
            iCount++;
        }
    }
    cout << "Array sorted from lowest to highest:" << endl;
    for (i = 0; i < iRows; i++)
    {
        for (j = 0; j < iColumns; j++)
        {
            cout << iBArray[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}

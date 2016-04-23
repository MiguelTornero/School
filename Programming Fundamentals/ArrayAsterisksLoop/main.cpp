#include <iostream>

using namespace std;

int main()
{
    int i, j, *iArr, iCap;
    cin >> iCap;
    iArr = new int[iCap];
    for (i = 0; i < iCap; i++)
    {
        cin >> iArr[i];
    }
    for (i = 0; i < iCap; i++)
    {
        cout << iArr[i] << " ";
        for (j = 1; j <= iArr[i]; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}

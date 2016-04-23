#include <iostream>

using namespace std;

int main()
{
    int rows, columns, i, j;
    cin >> rows >> columns;
    int iBArr[rows][columns];
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < columns; j++)
        {
            cin >> iBArr[i][j];
        }
    }
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < columns; j++)
        {
            cout << iBArr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}

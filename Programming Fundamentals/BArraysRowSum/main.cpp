#include <iostream>

using namespace std;

int main()
{
    int i, j, columns, rows;
    cin >> rows >> columns;
    int barray[rows][columns], normalArray[rows];
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < columns; j++)
        {
            cin >> barray[i][j];
        }
    }
    for (i = 0; i < rows; i++)
    {
        normalArray[i] = 0;
        for (j = 0; j < columns; j++)
        {
            normalArray[i] += barray[i][j];
        }
    }
    for (i = 0; i < rows; i++)
    {
        cout << normalArray[i] << " ";
    }
    return 0;
}

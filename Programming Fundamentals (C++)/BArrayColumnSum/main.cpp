#include <iostream>

using namespace std;

int main()
{
    int i, j, rows, columns;
    cin >> rows >> columns;
    double barray[rows][columns], columnarray[columns];
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < columns; j++)
        {
            cin >> barray[i][j];
        }
    }
    for (i = 0; i < columns; i++)
    {
        columnarray[i] = 0;
        for (j = 0; j < rows; j++)
        {
            columnarray[i] += barray[j][i];
        }
    }
    for (i = 0; i < columns; i++)
    {
        cout << columnarray[i] << " ";
    }
    return 0;
}

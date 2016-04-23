#include <iostream>

using namespace std;

int main()
{
    int i, j, rows, columns, sum = 0;
    cin >> rows >> columns;
    int barray[rows][columns];
    for (i = 0; i < rows; i++)
    {
        for(j = 0; j < columns; j++)
        {
            cin >> barray[i][j];
        }
    }
    for (i = 0; i < rows; i++)
    {
        for(j = 0; j < columns; j++)
        {
            sum += barray[i][j];
        }
    }
    cout << sum;
    return 0;
}

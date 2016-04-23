#include <iostream>

using namespace std;

int main()
{
    int i, j, columns, rows, cap, counter = 0;
    cin >> rows >> columns;
    cap = rows * columns;
    int barr[rows][columns], arr[cap];
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < columns; j++)
        {
            cin >> barr[i][j];
        }
    }
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < columns; j++)
        {
            arr[counter] = barr[i][j];
            counter ++;
        }
    }
    counter --;
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < columns; j++)
        {
            barr[i][j] = arr[counter];
            counter --;
        }
    }
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < columns; j++)
        {
            cout << barr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}

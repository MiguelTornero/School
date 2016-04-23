#include <iostream>

using namespace std;

int main()
{
    int i, j, columns, rows;
    cin >> rows >> columns;
    int barr[rows][columns];
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < columns; j++)
        {
            cin >> barr[i][j];
        }
    }
    cout << endl;
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < columns; j++)
        {
            if (i == 0 || j == 0 || i == rows - 1 || j == columns - 1)
            {
                cout << "* ";
            }
            else
            {
                cout << barr[i][j] << " ";
            }
        }
        cout << endl;
    }
    return 0;
}

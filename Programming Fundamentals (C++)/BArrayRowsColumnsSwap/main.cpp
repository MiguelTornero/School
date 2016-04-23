#include <iostream>

using namespace std;

int main()
{
    int i, j, side, cap, counter = 0;
    cin >> side;
    cap = side * side;
    int barr[side][side], arr[cap];
    for (i = 0; i < side; i++)
    {
        for (j = 0; j < side; j++)
        {
            cin >> barr[i][j];
        }
    }
    for (i = 0; i < side; i++)
    {
        for (j = 0; j < side; j++)
        {
            arr[counter] = barr[i][j];
            counter ++;
        }
    }
    counter = 0;
    for (i = 0; i < side; i++)
    {
        for (j = 0; j < side; j++)
        {
            barr[j][i] = arr[counter];
            counter ++;
        }
    }
    for (i = 0; i < side; i++)
    {
        for (j = 0; j < side; j++)
        {
            cout << barr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}

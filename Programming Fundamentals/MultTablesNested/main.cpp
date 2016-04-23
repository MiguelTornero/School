#include <iostream>

using namespace std;
void multTables(int x)
{
    int i, j;
    for (i = 1; i <= x; i++)
    {
        for (j = 1; j <= 10; j++)
        {
            cout << i << " * " << j <<  " = " << i * j << endl;
        }
        cout << endl;
    }
}
int main()
{
    int iNumber;
    cout << "Enter Number: ";
    cin >> iNumber;
    if (iNumber < 1)
    {
        cout << "That's not a valid input." << endl;
    }
    else
    {
        multTables(iNumber);
    }
    return 0;
}

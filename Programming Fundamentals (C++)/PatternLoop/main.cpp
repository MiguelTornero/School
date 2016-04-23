#include <iostream>

using namespace std;

int main()
{
    int iNumber, i, j;
    cin >> iNumber;
    if (iNumber > 0 && iNumber < 10)
    {
        for (i = iNumber; i > 0; i--)
        {
            for (j = 1; j <= i; j++)
            {
                cout << j;
            }
            cout << endl;
        }
    }
    else
    {
        cout << "That's not a valid input" << endl;
    }
    return 0;
}

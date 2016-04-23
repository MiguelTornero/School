#include <iostream>

using namespace std;
bool isPrime(int x)
{
    if (x < 2)
    {
        return false;
    }
    for (int i = 2; i < x; i++)
    {
        if (x % i == 0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int iLimit, i;
    cin >> iLimit;
    if (iLimit > 2)
    {
        for (i = 2; i < iLimit; i++)
        {
            if (isPrime(i))
            {
                cout << i << ' ';
            }
        }
        cout << endl;
    }
    else
    {
        cout << "Invalid input, enter a bigger number" << endl;
    }
    return 0;
}

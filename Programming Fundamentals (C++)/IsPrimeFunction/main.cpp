#include <iostream>

using namespace std;

bool isPrime(int x)
{
    if (x < 2)
    {
        return false;
    }
    int i = 2;
    while (i < x)
    {
        if (x % i == 0)
        {
            return false;
        }
        i++;
    }
    return true;
}
int main()
{
    int i;
    cin >> i;
    if (isPrime(i))
    {
        cout << "The number is prime";
    }
    else
    {
        cout << "The number is not prime";
    }
    return 0;
}

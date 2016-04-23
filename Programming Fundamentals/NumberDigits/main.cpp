#include <iostream>

using namespace std;

int main()
{
    int i = 0, num;
    cin >> num;
    while (num > 0)
    {
        num /= 10;
        i++;
    }
    cout << "Number of digits: " <<i;
    return 0;
}

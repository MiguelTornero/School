#include <iostream>

using namespace std;

int main()
{
    int cap, i;
    cin >> cap;
    int arr[cap];
    for (i = 0; i < cap; i++)
    {
        arr[i] = i + 1;
    }
    for (i--; i >= 0; i--)
    {
        cout << arr[i] << " ";
    }
    return 0;
}

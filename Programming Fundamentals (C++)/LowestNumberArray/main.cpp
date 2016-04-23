#include <iostream>
#include <climits>

using namespace std;
int lowestNumberArray(int x)
{
    int arr[x], a = INT_MAX;
    cout << "Enter numbers:" << endl;
    for (int i = 0; i < x; i++)
    {
        cin >> arr[i];
        if (arr[i] < a)
        {
            a = arr[i];
        }
    }
    return a;
}
int main()
{
    int iCapacity, iLowest;
    cout << "Enter the capacity:" << endl;
    cin >> iCapacity;
    iLowest = lowestNumberArray(iCapacity);
    cout << "The lowest number is: " << iLowest;
    return 0;
}

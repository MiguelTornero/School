#include <iostream>

using namespace std;

int main()
{
    float iNumber, iFactorial = 1;
    cout << "Enter a number" << endl;
    cin >> iNumber;
    for (int i = 1; i <= iNumber; i++)
    {
        iFactorial *= i;
    }
    cout << iFactorial << endl;
    return 0;
}

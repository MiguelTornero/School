#include <iostream>

using namespace std;
void multTable (int iNumber, int iStart, int iEnd)
{
    for (int i = iStart; i <= iEnd; i++)
    {
        cout << iNumber << " * " << i << " = " << iNumber * i << endl;
    }
}
int main()
{
    int num1, num2, num3;
    cin >> num1 >> num2 >> num3;
    multTable(num1, num2, num3);
    return 0;
}

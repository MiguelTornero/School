#include <iostream>
#include <cmath>
using namespace std;
int n;
char formula;
int formula1 (int num)
{
    int result;
    result = pow(num + 1, 2);
    return result;
}
int formula2 (int num)
{
    int result;
    result = pow(num, 2) + 2 * num + 1;
    return result;
}
int main()
{
    int result;
    cout << "Enter the value of n:" << endl;
    cin >> n;
    cout << "Enter the character of the formula you want to use:" << endl << "a. (n+1)^2" << endl << "b. n^2 + 2n + 1" << endl ;
    cin >> formula;
    switch (formula)
    {
    case 'a':
        result = formula1(n);
        cout << "The result is: " << result << endl;
        break;
    case 'b':
        result = formula2 (n);
        cout << "The result is: " << result << endl;
        break;
    default:
        cout << "Error, invalid character\n";
    }
    return 0;
}

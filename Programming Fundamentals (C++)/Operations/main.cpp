#include <iostream>

using namespace std;
double dNum1,dNum2, dResult;
char cOperation;
int main()
{
    cout << "Enter 2 numbers: ";
    cin >> dNum1 >> dNum2;
    cout << "Enter the symbol of the operation you want: ";
    cin >> cOperation;
    switch (cOperation)
    {
    case '+':
        dResult = dNum1 + dNum2;
        cout << "The result is: " << dResult;
        break;
    case '-':
        dResult = dNum1 - dNum2;
        cout << "The result is: " << dResult;
        break;
    case 'x':
    case '*':
        dResult = dNum1 * dNum2;
        cout << "The result is: " << dResult;
        break;
    case '/':
        if (dNum2!=0)
        {
            dResult = dNum1 / dNum2;
            cout << "The result is: " << dResult;
        }
        else
        {
            cout << "Cannot divide a number by 0";
        }
        break;
    default:
        cout << "Error: Invalid Character";
    }
    return 0;
}

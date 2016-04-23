#include <iostream>
/*
MyPowFunction.cpp

This program calculates the value of an exponential
provided by the user using a function, then outputs the result.

Miguel Angel Tornero Carrillo
2016-02-23
*/
using namespace std;
/*
myPow

This function calculates the result of the exponential

Parameters:
dExponent: The value of the exponent
dNumber: The value of the base number before the exponential
dResult: The resulting number that the function returns
*/
double myPow (double dNumber, int iExponent)
{
    // Defines result and gives it a value of 1
    double dResult = 1;
    // If the exponent is positive, it multiplies iResult by iNumber
    for (; iExponent > 0; iExponent--)
    {
        dResult *= dNumber;
    }

    // If the exponent is negative, it divides iResult by iNumber
    for (; iExponent < 0; iExponent++)
    {
        dResult /= dNumber;
    }
    // Returns the value of dResult
    return dResult;
}
int main()
{
    // Defines the variables to store the base number and the result
    double dNumber, dResult;
    // Defines the variable to store the exponent, it can only accept integers
    int iPower;
    // Gets the value of the base number
    cout << "Enter a Number:" << endl;
    cin >> dNumber;
    // Gets the value of the power
    cout << "Enter the Exponent:" << endl;
    cin >> iPower;
    // Calls the function myPow and stores the returned value in dResult
    dResult = myPow(dNumber, iPower);
    // Outputs the result
    cout << "The Result is: " << dResult << endl;
    return 0;
}

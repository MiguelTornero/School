/*
GeneralFormula.cpp

This program calculates the value of x1 and x2, given the values of a, b and c
using the General Quadratic Formula: x = (-b +- sqrt (b^2 - 4ac)) / 2a

Miguel Tornero
2016-02-09
*/

#include <iostream>
#include <cmath>

using namespace std;

/*
Defining the dDiscriminant variable that's used in both
the main function and the generalFormula function.
If negative, then x equals an imaginary number.
*/
double dDiscriminant;
/*
generalFormula

This function calculates the values of x1 and x2
with the values of a, b, c and the discriminant,
using the General Formula and outputs the result.

Parameters:
dValueA, dValueB and dValueC store the values of
a, b and c respectably, in the context of the General Formula.
*/
void generalFormula(double dValueA, double dValueB, double dValueC)
{
    // Defining the variables to store the two values of x.
    double dX1, dX2;
    // Calculating the values of x1 and x2.
    dX1 = ( -dValueB + sqrt(dDiscriminant)) / (2.0 * dValueA);
    dX2 = ( -dValueB - sqrt(dDiscriminant)) / (2.0 * dValueA);
    // Outputs the values of xi and x2.
    cout << "x1 = " << dX1 << endl << "x2 = " << dX2 << endl;
}
/*
Main Function

Asks the user the input the values of a, b and c and,
if the discriminant is negative, outputs the values of
x1 and x2 as imaginary numbers.
*/
int main()
{
    // Defining the variables to store the values of a, b and c, respectably.
    double dValueA, dValueB, dValueC;
    // Getting the values of a, b and c from the user.
    cout << "Enter the values of a, b and c:" << endl;
    cin >> dValueA >> dValueB >> dValueC;
    // Calculating the value of the discriminant, which equals b^2 - 4ac.
    dDiscriminant = dValueB * dValueB - 4.0 * dValueA * dValueC;
    // Checking if the discriminant is a negative number.
    if (dDiscriminant < 0.0)
    {
        // If it is then output the value of x1 and x2 as imaginary numbers
        cout << "x1 = Imaginary number\nx2 = Imaginary number";
    }
    else
    {
        // If it's not then call the generalFormula function.
        generalFormula(dValueA, dValueB, dValueC);
    }
    return 0;
}

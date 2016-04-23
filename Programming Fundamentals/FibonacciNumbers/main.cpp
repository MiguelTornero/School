/*
FibonacciNumbers.cpp

This program outputs the Fibonacci numbers specified
by the user, using a function.

Miguel Angel Tornero Carrillo
2016-02-25
*/
#include <iostream>
using namespace std;
/*
fibonacciNumbers

This function calculates the numbers int he Fibonacci sequence
and prints them.

Parameters:
iNumber: Quantity of numbers of the Fibonacci sequence to output.
*/
void fibonacciNumbers (int iNumber)
{
    // Outputs an error message if the number is negative or 0
    if (iNumber < 1)
    {
        cout << "That's not a valid number." << endl;
    }
    else
    {
        // If the number is positive, it starts printing the result
        cout << "The result is:" << endl;
        // If the number is exactly 1 then it outputs only the number 0
        if (iNumber == 1)
        {
            cout << 0;
        }
        else
        {
            // Defines the variables used to calculate the Fibonacci numbers
            int iA = 0, iB = 1, iC;
            // If the number is 2 or higher, it outputs 0 and 1
            cout << 0 << ", " << 1;
            // If the number is 3 or higher, it starts calculating the rest of the Fibonacci sequence
            for (int i = 2; i < iNumber; i++)
            {
                // Calculates the value of the next Fibonacci number and stores it in iC
                iC = iA + iB;
                // Prints the value of iC
                cout << ", " << iC;
                // Sets up iA and iB to calculate the next Fibonacci number
                iA = iB;
                iB = iC;
            }
        }
    }
}
int main()
{
    // Defines the variable to store the quantity of Fibonacci numbers
    int iQuantity;
    // Gets the quantity of Fibonacci numbers desired by the user
    cout << "Enter the quantity of Fibonacci numbers that you want:" << endl;
    cin >> iQuantity;
    // Calls the fibonacciNumbers function with the number provided
    fibonacciNumbers(iQuantity);
}

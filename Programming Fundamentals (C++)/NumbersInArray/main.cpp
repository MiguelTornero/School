/*
ArrayNumberFinder.cpp

This application finds how many times a number
is found in an array given by the user.

Miguel Angel Tornero Carrillo A00820449
2016-03-10
*/
#include <iostream>

using namespace std;
/*
integerInput

Goes through the console input, finds the first
integer, and returns it.

Parameters: None

Returns: An integer input
*/
int integerInput()
{
    // Defining the variable to store the integer to return
    int iInput;
    // Getting the input from the console
    cin >> iInput;
    // Validates the input
    while (cin.fail())
    {
        // If the input is not an integer, it ignores it and goes to the next character
        cin.clear();
        cin.ignore();
        cin >> iInput;
    }
    // Returning the integer
    return iInput;
}
/*
Main Function

Asks the user to fill an array, then asks the user
for a number to search for in the array, then it outputs
how many times that number is found in the array.

Parameters: None

Returns: An integer value with the error number (0 = none)
*/
int main()
{

    // Defining the variables to store the array, the capacity of the array, the number to find,
    // the number of times that number was found, and the loop control variable, respectively.
    int *iArr, iCap, iNumber, iCount, i;
    // Defining the variable to store the Yes or No answer
    char cAnswer;
    // Getting the capacity pf the array
    cout << "How many numbers do you want to enter?" << endl;
    iCap = integerInput();
    // Validating the capacity
    while (iCap <= 0)
    {
        // If the capacity is less or equal than 0, then it outputs an error message and it tries to get another input
        cout << "Invalid capacity." << endl;
        iCap = integerInput();
    }
    // Setting the capacity of the array
    iArr = new int[iCap];
    // Filling the array with the user's input
    cout << "Enter the numbers:" << endl;
    for (i = 0; i < iCap; i++)
    {
        iArr[i] = integerInput();
    }
    do
    {
        // Getting the number to search for in the array
        cout << "Enter the number you want to search for:" << endl;
        iNumber = integerInput();
        // Initializing the count at 0
        iCount = 0;
        // Finding the number in the array
        for (i = 0; i < iCap; i++)
        {
            // If the number is found it adds one to the count
            if (iNumber == iArr[i])
            {
                iCount++;
            }
        }
        // Displaying the result
        cout << iNumber << " is in the array " << iCount << " time(s)." << endl << endl;
        // Asking the user if they wish to search for another number
        cout << "Do you want to search for another number? (Y/N)" << endl;
        cin >> cAnswer;
        // Validating if the answer is either Y or N
        while (cAnswer != 'y' && cAnswer != 'Y' && cAnswer != 'n' && cAnswer != 'N')
        {
            // If it's not, then it tells the user that they entered and invalid character, and reads the next character
            cout << "Invalid character." << endl;
            cin >> cAnswer;
        }
    }
    // If the answer is 'Y' or 'y', then it loops and does the searching process again
    while (cAnswer == 'Y' || cAnswer == 'y');
    return 0;
}

/*
Diagonals.cpp

This program creates a bi-dimensional array using dimensions provided by the user,
then it asks the user to fill the array, and then it displays the bi-dimensional
array, the principal diagonal and the inverse diagonal.

Miguel Angel Tornero Carrillo A00820449
2016-03-31
*/
#include <iostream>

using namespace std;
/*
Main Function

Asks the user for the dimensions of the bi-dimensional array and asks them to
fill the array, then it displays the bi-dimensional array, the principal diagonal
and the inverse diagonal.

Parameters: none.
Returns: 0 (error number).
*/
int main()
{
    // Defining the variables to store the loop control variables, the number of rows, and the number of columns, respectively.
    int i, j, iRows, iColumns;
    // Getting the number of rows for the array.
    cout << "Enter the number of rows:" << endl;
    cin >> iRows;
    // Getting the number of columns for the array.
    cout << "Enter the number of columns:" << endl;
    cin >> iColumns;
    // Validating that the dimensions of the array make a square.
    while (iRows != iColumns)
    {
        // If the array is not a square, it gets the rows and columns again.
        cout << "The array isn't squared. Try again." << endl << endl;
        cout << "Enter the number of rows:" << endl;
        cin >> iRows;
        cout << "Enter the number of columns:" << endl;
        cin >> iColumns;
    }
    // Defining the bi-dimensional array, and the arrays to store the principal diagonal and the inverse diagonal.
    int iBArray[iRows][iColumns], iArrDiagonal[iRows], iArrInvDiagonal[iRows];
    // Filling the bi-dimensional array.
    cout << "Fill the array:" << endl;
    for (i = 0; i < iRows; i++)
    {
        for (j = 0; j < iColumns; j++)
        {
            cin >> iBArray[i][j];
        }
    }
    // Getting the principal diagonal.
    for (i = 0; i < iRows; i++)
    {
        iArrDiagonal[i] = iBArray[i][i];
    }
    // Getting the inverse diagonal.
    for (i = 0; i < iRows; i++)
    {
        iArrInvDiagonal[i] = iBArray[i][iRows - i - 1];
    }
    // Displaying the bi-dimensional array.
    cout << endl << "The bi-dimensional array:" << endl;
    for (i = 0; i < iRows; i++)
    {
        for (j = 0; j < iColumns; j++)
        {
            cout << iBArray[i][j] << " ";
        }
        cout << endl;
    }
    // Displaying the principal diagonal.
    cout << endl << "Principal diagonal:" << endl;
    for (i = 0; i < iRows; i++)
    {
        cout << iArrDiagonal[i] << " ";
    }
    cout << endl;
    // Displaying the inverse diagonal.
    cout << endl << "Inverse diagonal:" << endl;
    for (i = 0; i < iRows; i++)
    {
        cout << iArrInvDiagonal[i] << " ";
    }
    cout << endl;
    return 0;
}

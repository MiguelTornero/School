/*
IntegrativeActivity.cpp

This program presents the user with four options:

1.	Solve the winner of a tick-tack-toe.
2.	Validate a provided date.
3.	Get the average of a class with three partials and display a graphic.
4.	Terminate the program.

After an option is selected, it executes it and then returns you to the menu
once it's finished.

Miguel Angel Tornero Carrillo A00820449
2016-04-25
*/
#include <iostream>
#include <string>
#include <cmath>

using namespace std;

/*
pressEnterToContinue function

Outputs a message and waits for the user to push enter

Parameters: none
Returns: nothing
*/

void pressEnterToContinue()
{
    // Printing message.
    cout << "\nPress 'Enter' to return to the menu.";
    // Waiting for the user to push 'Enter'.
    cin.get();
    cin.sync();
    cout << endl;
}

/*
tickTackToe function

Asks the user to input a game of tick-tack-toe and
puts in into a bi-dimensional array of characters,
then it tries to find a winner in the horizontal
lines, then the vertical lines, than the principal
diagonal, and lastly the inverse diagonal.

Parameters: none
Returns: nothing
*/

void tickTackToe()
{
    char cArrTickTackToe[3][3], cWinner;
    int i, j;
    bool bWinnerFound = false;
    // Getting tick-tack-toe.
    cout << "\nProvide the tick-tack-toe (use '-' for empty spaces):\n" << endl;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cin >> cArrTickTackToe[i][j];
        }
    }
    cin.sync();
    // Testing for horizontal win.
    for (i = 0; !bWinnerFound && i < 3; i++)
    {
        if (cArrTickTackToe[i][0] == cArrTickTackToe[i][1] && cArrTickTackToe[i][1] == cArrTickTackToe[i][2])
        {
            if (cArrTickTackToe[i][0] != '-')
            {
                cWinner = cArrTickTackToe[i][0];
                bWinnerFound = true;
            }
        }
    }
    // Testing for vertical win.
    for (i = 0; !bWinnerFound && i < 3; i++)
    {
        if (cArrTickTackToe[0][i] == cArrTickTackToe[1][i] && cArrTickTackToe[1][i] == cArrTickTackToe[2][i])
        {
            if (cArrTickTackToe[0][i] != '-')
            {
                cWinner = cArrTickTackToe[0][i];
                bWinnerFound = true;
            }
        }
    }
    // Testing for principal diagonal win.
    if (!bWinnerFound && cArrTickTackToe[0][0] == cArrTickTackToe[1][1] && cArrTickTackToe[1][1] == cArrTickTackToe[2][2])
    {
        if (cArrTickTackToe[0][0] != '-')
        {
            cWinner = cArrTickTackToe[0][0];
            bWinnerFound = true;
        }
    }
    // Testing for inverse diagonal win.
    if (!bWinnerFound && cArrTickTackToe[0][2] == cArrTickTackToe[1][1] && cArrTickTackToe[1][1] == cArrTickTackToe[2][0])
    {
        if (cArrTickTackToe[0][2] != '-')
        {
            cWinner = cArrTickTackToe[0][2];
            bWinnerFound = true;
        }
    }
    // Printing the input.
    cout << "\nInput:\n" << endl;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cout << cArrTickTackToe[i][j] << ' ';
        }
        cout << '\n';
    }
    cout << endl;
    // Printing result.
    cout << "Result:\n" << endl;
    if (bWinnerFound)
    {
        cout << "'" << cWinner << "' wins." << endl;
    }
    else
    {
        cout << "Draw. No winners found." << endl;
    }
    pressEnterToContinue();
}

/*
integerInput function

Takes the first valid integer input from console, ignoring
all invalid characters, and returns it.

Parameters: none

Returns:
    iInput: An integer form console.
*/

int integerInput()
{
    int iInput;
    // Getting integer from console.
    cin >> iInput;
    // If the character is not an integer then it ignores it and tries again until it finds one.
    while(cin.fail())
    {
        cin.clear();
        cin.ignore();
        cin >> iInput;
    }
    return iInput;
}

/*
validDate function

Asks the user to input a date in integers, then
verifies if the provided date is a valid one, by
checking if it's got an invalid day, invalid
month or both

Parameters: none
Returns: nothing
*/

void validDate()
{
    int iDay, iMonth, iYear, iValidDays;
    bool bValidDate = true;
    // Getting date.
    cout << "\nEnter a date (day - month - year):\n" << endl;
    iDay = abs(integerInput());
    iMonth = abs(integerInput());
    iYear = abs(integerInput());
    cin.sync();
    // Getting the valid days.
    switch (iMonth)
    {
    case 2:
        if (iYear % 4 == 0)
        {
            iValidDays = 29;
        }
        else
        {
            iValidDays = 28;
        }
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        iValidDays = 30;
        break;
    default:
        iValidDays = 31;
    }
    // Displaying the input.
    cout << "\nInput:" << endl;
    cout << iDay << " - " << iMonth << " - " << iYear << endl;
    // Displaying the validation messages.
    cout << endl;
    if (iDay > iValidDays || !iDay)
    {
        cout << "Invalid day." << endl;
        bValidDate = false;
    }
    if (iMonth > 12 || !iMonth)
    {
        cout << "Invalid month." << endl;
        bValidDate = false;
    }
    if (bValidDate)
    {
        cout << "Valid date." << endl;
    }
    pressEnterToContinue();
}

/*
setStringLength

Receives a string, and sets its length to the given integer,
either by truncating it and putting ellipses (...) at the end
or filling it with space characters.

Parameters:
    sInput:         The string to lengthen.
    iFinalLength:   The amount of characters on the final string

Returns:
    sOutput:        The lengthened string.
*/

string setStringLength(string sInput, int iFinalLength)
{
    int i, iInitialLength;
    string sOutput;
    iInitialLength = sInput.length();
    // If the string's length is grater than the desired length, it truncates it.
    if (iInitialLength > iFinalLength)
    {
        // The length is set to the desired one minus 3 to make room for the ellipses.
        for (i = 0; i < iFinalLength - 3; i++)
        {
            sOutput += sInput[i];
        }
        sOutput += "...";
    }
    else
    {
        sOutput = sInput;
        // Filling the array with spaces.
        for (i = 0; i < iFinalLength - iInitialLength; i++)
        {
            sOutput += ' ';
        }
    }
    return sOutput;
}

/*
averageGrades function

Asks the user for the amount of students, then gets the names
and grades of the students. Then it proceeds to make a table
and a graph with the information given, and finally it gives
the average of the class.

Parameters: none
Returns:    nothing
*/

void averageGrades()
{
    int i, j, iCap;
    double dTotal, dStudents, dClassAverage, dGradeLimit;
    // Getting the capacity to initialize the arrays.
    cout << "\nEnter the amount of students:\n" << endl;
    iCap = abs(integerInput());
    cin.sync();
    // Validating capacity
    while (iCap == 0)
    {
        cout << "\nThe amount of students can't be zero. Try again.\n" << endl;
        iCap = abs(integerInput());
        cin.sync();
    }
    double dArrGrades[iCap][3], dArrAverages[iCap];
    string sNames[iCap];
    // Filling in the arrays.
    for (i = 0; i < iCap; i++)
    {
        // Getting names.
        cout << "\nFull name of student #" << i+1 << ":\n" << endl;
        getline(cin, sNames[i]);
        cin.sync();
        // Setting the length of the string to 32.
        sNames[i] = setStringLength(sNames[i], 32);
        // Getting the grades
        cout << "\nThe 3 partial grades (0-100) of student #" << i+1 << ":\n" << endl;
        for (j = 0; j < 3; j++)
        {
            // Validating the grades.
            dArrGrades[i][j] = abs(integerInput());
            if (dArrGrades[i][j] > 100.0)
            {
                dArrGrades[i][j] = 100.0;
            }
        }
        cin.sync();
    }
    // Calculating the averages.
    for (i = 0; i < iCap; i++)
    {
        dTotal = 0.0;
        for (j = 0; j < 3; j++)
        {
            dTotal += dArrGrades[i][j];
        }
        dArrAverages[i] = dTotal / 3.0;
    }
    // Displaying the results.
    cout << "\nFull name\t\t\t\tGrades\t\tAverage\n" << endl;
    for (i = 0; i < iCap; i++)
    {
        cout << sNames[i] << "\t";
        for (j = 0; j < 3; j++)
        {
            cout << dArrGrades[i][j] << " ";
        }
        cout << "   \t" << dArrAverages[i] << endl;
    }
    // Printing the graph from 0 to 50.
    cout << "\n 0-50\t";
    for (i = 0; i < iCap; i++)
    {
        if (dArrAverages[i] <= 50.0)
        {
            cout << '*';
        }
    }
    cout << endl;
    // Printing the graph from 51 to 100.
    for (i = 0; i <= 4; i++)
    {
        dGradeLimit = i * 10 + 60;
        cout << dGradeLimit - 9.0 << "-" << dGradeLimit << "\t";
        for (j = 0; j < iCap; j++)
        {
            if (dArrAverages[j] > dGradeLimit - 10.0 && dArrAverages[j] <= dGradeLimit)
            {
                cout << '*';
            }
        }
        cout << endl;
    }
    // Printing the class average.
    dTotal = 0.0;
    for (i = 0; i < iCap; i++)
    {
        dTotal += dArrAverages[i];
    }
    dStudents = iCap;
    dClassAverage = dTotal / dStudents;
    cout << "\nAverage of the class: " << dClassAverage << endl;
    pressEnterToContinue();
}

/*
Main function

Displays a menu of options available, after the
option has been selected and executed, it displays
the menu again, until the option '4' is selected,
then it terminates the program.

Parameters: none
Returns:    An integer with the value of 0
*/

int main()
{
    char cOption;
    do
    {
        // Displaying the menu.
        cout << "Select an option:\n" << endl;
        cout << "1. Solve the winner of a tick-tack-toe.\n";
        cout << "2. Validate a provided date.\n";
        cout << "3. Get the average of a class with three partials and display a graph.\n";
        cout << "4. Terminate the program.\n" << endl;
        // Getting answer
        cin >> cOption;
        cin.sync();
        // Calling the functions corresponding to the option selected.
        switch (cOption)
        {
        case '1':
            tickTackToe();
            break;
        case '2':
            validDate();
            break;
        case '3':
            averageGrades();
            break;
        case '4':
            cout << "\nTerminating program..." << endl;
            break;
        default:
            cout << "\nInvalid option, try again.\n" << endl;
        }
    }
    // If the option selected is not 4, then it loops and shows the menu again.
    while (cOption != '4');
    return 0;
}

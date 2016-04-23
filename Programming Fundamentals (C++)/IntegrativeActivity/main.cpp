#include <iostream>
#include <string>

using namespace std;

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
}

void validDate()
{
    ;
}

void averageGrades()
{
    ;
}

int main()
{
    char cOption;
    do
    {
        cout << "\nSelect an option:\n" << endl;
        cout << "1. Solve the winner of a tick-tack-toe.\n";
        cout << "2. Validate a provided date.\n";
        cout << "3. Get the average of a class of three partials and display a graphic.\n";
        cout << "4. Terminate the program.\n" << endl;
        cin >> cOption;
        cin.sync();
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
            break;
        default:
            cout << "\nInvalid option, try again." << endl;
        }
    }
    while (cOption != '4');
    return 0;
}

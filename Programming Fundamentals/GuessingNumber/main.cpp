#include <iostream>

using namespace std;

int main()
{
    int iNumber1,iNumber2;
    cout << "Person #1, please enter a number:" << endl;
    cin >> iNumber1;
    cout << "Person #2, try to guess the number:" << endl;
    cin >> iNumber2;
    while (iNumber1 != iNumber2)
    {
        if (iNumber1 > iNumber2)
        {
            cout << "Try a higher number." << endl;
        }
        else
        {
            cout << "Try a smaller number." << endl;
        }
        cin >> iNumber2;
    }
    cout << "You guessed correctly!\nThe number was " << iNumber1 << endl;
    return 0;
}

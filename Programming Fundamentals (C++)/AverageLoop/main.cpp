#include <iostream>

using namespace std;

int main()
{
    double dTotal = 0, dSum = 0, dGrade, dAverage;
    char cAnswer;
    do
    {
       cout << "Enter a grade:" << endl;
       cin >> dGrade;
       cin.sync();
       while (cin.fail())
       {
           cin.clear();
           cin.sync();
           cout << "That's not a valid input, Try again." << endl;
           cin >> dGrade;
           cin.sync();
       }
       dSum += dGrade;
       dTotal++;
       cout << "More? (Y/N)" << endl;
       cin >> cAnswer;
       cin.sync();
       while (cAnswer != 'y' && cAnswer != 'Y' && cAnswer != 'n' && cAnswer != 'N')
       {
           cout << "That's not a valid character. Try again" << endl;
           cin >> cAnswer;
           cin.sync();
       }
    }
    while (cAnswer == 'y' || cAnswer == 'Y');
    dAverage = dSum / dTotal;
    cout << "The average is: " << dAverage << endl << endl;
    cout << "Press ENTER to continue... " << endl;
    cin.ignore();
    return 0;
}

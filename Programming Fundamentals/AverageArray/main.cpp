#include <iostream>

using namespace std;

int main()
{
    int iCapacity,i;
    double *dArrGrades, dTotal = 0;
    cout << "How many grades do you want to average?" << endl;
    cin >> iCapacity;
    dArrGrades = new double[iCapacity];
    cout << "Enter the grades:" << endl;
    for (i = 0; i < iCapacity; i++)
    {
        cin >> dArrGrades[i];
        dTotal += dArrGrades[i];
    }
    cout << "The average is: " << dTotal/iCapacity;
    return 0;
}

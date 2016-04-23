#include <iostream>

using namespace std;
double dNumber1, dNumber2, dNumber3, dAverage;
int main()
{
    cout << "Enter three numbers:" << endl;
    cin >> dNumber1;
    cin >> dNumber2;
    cin >> dNumber3;
    if (dNumber1<0 || dNumber2<0 || dNumber3<0)
    {
        cout << "Unable to get average, negative number";
    }
    else
    {
        dAverage = (dNumber1 + dNumber2 + dNumber3) / 3;
        cout << "The average is: " << dAverage;
    }
    return 0;
}

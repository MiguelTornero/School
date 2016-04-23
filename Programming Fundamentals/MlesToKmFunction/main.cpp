#include <iostream>

using namespace std;
void printMilesToKm(double miles)
{
    double km;
    km = miles * 1.6;
    cout << km << endl;
}
int main()
{
    double number;
    cin >> number;
    printMilesToKm(number);
    cin >> number;
    printMilesToKm(number);
    cin >> number;
    printMilesToKm(number);
    cin >> number;
    printMilesToKm(number);
    return 0;
}

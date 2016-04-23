#include <iostream>

using namespace std;

double BMI (double a, double b)
{
    double result;
    result = a / (b * b);
    return result;
}
int main()
{
    double weight, height, bmi;
    cout << "Enter you weight in kilograms:" << endl;
    cin >> weight;
    cout << "Enter your height in meters:"<< endl;
    cin >> height;
    bmi = BMI (weight, height);
    cout << "Your BMI is " << bmi << endl;
    if (bmi < 18)
    {
        cout << "You are Bellow Weight";
    }
    else
    {
        if (bmi >= 25)
        {
            cout << "You are Overweight";
        }
        else
        {
            cout << "You have a Normal Weight";
        }
    }
    return 0;
}

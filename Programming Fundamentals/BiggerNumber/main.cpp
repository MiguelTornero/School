#include <iostream>

using namespace std;
double num1,num2,num3,largest;
int main()
{
    cout << "Enter 3 numbers:" << endl;
    cin>>num1;
    cin>>num2;
    cin>>num3;
    if (num1>=num2&&num1>=num3)
    {
        largest=num1;
    }
    else
    {
        if (num2>=num3)
        {
            largest=num2;
        }
        else
        {
            largest=num3;
        }
    }
    cout<<largest<<" is the largest number";
    return 0;
}

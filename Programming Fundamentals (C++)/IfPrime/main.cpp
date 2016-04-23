#include <iostream>

using namespace std;
int a,b;
int main()
{
    cout << "Enter a number: ";
    cin >> a;
    if (a<0)
    {
        cout << "Error: Negative Number";
    }
    else
    {
        b=a-1;
        while (b>1&&a%b!=0)
        {
            b=b-1;
        }
        if (b==1)
        {
            cout << "That's a Prime Number";
        }
        else
        {
            cout << "That's a Composite Number";
        }
    }
    return 0;
}

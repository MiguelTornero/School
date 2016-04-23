#include <iostream>

using namespace std;
int a,b;
int main()
{
    a=2;
    b=1;
    while (a<1000)
    {
        if (b==1)
        {
            cout << a << endl;
            a=a+1;
            b=a-1;
        }
        else
        {
            if (a%b==0)
            {
                a=a+1;
                b=a-1;
            }
            else
            {
                b=b-1;
            }
        }
    }
    return 0;
}

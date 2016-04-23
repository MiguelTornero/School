#include <iostream>

using namespace std;
double d;
int i;
int main()
{
    cout << "Please enter a number: ";
    cin >> d;
    i=d;
    if (d!=i)
        cout << "ERROR: That's not an integer";
    else if (i%2==0)
        cout << "That's an even number";
    else
        cout << "That's an odd number";
    return 0;
}

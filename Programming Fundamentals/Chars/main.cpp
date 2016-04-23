#include <iostream>

using namespace std;

int main()
{
    char c;
    int i;
    for (i = 0; i < 1024; i++)
    {
        c = i;
        cout << i << " = " << c << endl;
    }
}

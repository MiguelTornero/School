#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double x, y, result;
    cin >> x >> y;
    x = abs(x);
    y = abs(y);
    result = (pow(x,y)- pow(y,2.0))/ sqrt(x+y);
    cout << result;
    return 0;
}

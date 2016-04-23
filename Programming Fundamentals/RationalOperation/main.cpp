#include <iostream>

using namespace std;
int iNumerator1, iDenominator1, iNumerator2, iDenominator2;
char cOperation;
int GCD (int x, int y)
{
    if (y == 0)
    {
        return x;
    }
    return GCD(y, x%y);
}
void rationalOperation()
{
    bool bValidCharacter = true;
    int iResultNumerator, iResultDenominator;
    switch (cOperation)
    {
    case '+':
        iResultDenominator = iDenominator1 * iDenominator2;
        iResultNumerator = iNumerator1 * iDenominator2 + iNumerator2 * iDenominator1;
        break;
    case '-':
        iResultDenominator = iDenominator1 * iDenominator2;
        iResultNumerator = iNumerator1 * iDenominator2 - iNumerator2 * iDenominator1;
        break;
    case '*':
        iResultDenominator = iDenominator1 * iDenominator2;
        iResultNumerator = iNumerator1 * iNumerator2;
        break;
    case '/':
        iResultDenominator = iDenominator1 * iNumerator2;
        iResultNumerator = iNumerator1 * iDenominator2;
        break;
    default:
        cout << "Not a valid character";
        bValidCharacter = false;
    }
    if (bValidCharacter == true)
    {
        int iGCD = GCD(iResultDenominator, iResultNumerator);
        iResultDenominator /= iGCD;
        iResultNumerator /= iGCD;
        cout << iNumerator1 << "/" << iDenominator1 << " " << cOperation << " " << iNumerator2 << "/" << iDenominator2 << " = " << iResultNumerator << "/" << iResultDenominator;
    }
}
int main()
{
    cin >> iNumerator1 >> iDenominator1 >> iNumerator2 >> iDenominator2 >> cOperation;
    if (iDenominator1 == 0 || iDenominator2 == 0)
    {
        cout << "Cannot divide by 0";
    }
    else
    {
        rationalOperation();
    }
    return 0;
}

#include <iostream>

using namespace std;
int iNumber1,iNumber2,iNumber3,iHighest,iMiddle,iLowest;
int main()
{
    cout << "Enter three whole numbers:" << endl;
    cin >> iNumber1 >> iNumber2 >> iNumber3;
    if (iNumber1 >= iNumber2 && iNumber1 >= iNumber3)
    {
        iHighest = iNumber1;
        if (iNumber2 >= iNumber3)
        {
            iMiddle = iNumber2;
            iLowest = iNumber3;
        }
        else
        {
            iMiddle = iNumber3;
            iLowest = iNumber2;
        }
    }
    else
    {
        if (iNumber2 >= iNumber1 && iNumber2 >= iNumber3)
        {
            iHighest = iNumber2;
            if (iNumber1 >= iNumber3)
            {
                iMiddle = iNumber1;
                iLowest = iNumber3;
            }
            else
            {
                iMiddle = iNumber3;
                iMiddle = iNumber1;
            }
        }
        else
        {
            iHighest = iNumber3;
            if (iNumber1 >= iNumber2)
            {
                iMiddle = iNumber1;
                iLowest = iNumber2;
            }
            else
            {
                iMiddle = iNumber2;
                iLowest = iNumber1;
            }
        }
    }
    cout << "The numbers in order from lowest to highest are:\n" << iLowest << " " << iMiddle << " " << iHighest;
    return 0;
}

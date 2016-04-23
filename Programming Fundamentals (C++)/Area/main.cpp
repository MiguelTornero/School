#include <iostream>

using namespace std;
char shape;
double num1,num2,area;
int main()
{
    cout<<"Enter the letter of the shape you wish to calculate the area for"<<endl;
    cin>>shape;
    if (shape=='C'||shape=='c'||shape=='S'||shape=='s'||shape=='R'||shape=='r'||shape=='T'||shape=='t')
    {


        if (shape=='C'||shape=='c')
        {
            cout<<"Enter the radius"<<endl;
            cin>>num1;
            area=3.1416*(num1*num1);
        }
        else
        {
            if (shape=='S'||shape=='s')
            {
                cout<<"Enter the length of the side"<<endl;
                cin>>num1;
                area=num1*num1;
            }
            else
            {
                if (shape=='R'||shape=='r')
                {
                    cout<<"Enter the width and height"<<endl;
                    cin>>num1>>num2;
                    area=num1*num2;
                }
                else
                {
                    cout<<"Enter the width and height"<<endl;
                    cin>>num1>>num2;
                    area=(num1*num2)/2;
                }
            }
        }
        cout<<"The area is: "<<area;
    }
    else
    {
        cout << "That's not a valid letter";
    }


    return 0;
}

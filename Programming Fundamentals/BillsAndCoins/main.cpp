#include <iostream>

using namespace std;
int iMoney,i500Bills,i200Bills,i100Bills,i50Bills,i20Bills,i10Coins,i5Coins,i2Coins,i1Coins;
int main()
{
    cout << "Enter Quantity: "; //Ask the user to input a number
    cin >> iMoney;
    i500Bills = iMoney / 500;
    iMoney = iMoney % 500;
    i200Bills = iMoney / 200;
    iMoney = iMoney % 200;
    i100Bills = iMoney / 100;
    iMoney = iMoney % 100;
    i50Bills = iMoney / 50;
    iMoney = iMoney % 50;
    i20Bills = iMoney / 20;
    iMoney = iMoney % 20;
    i10Coins = iMoney / 10;
    iMoney = iMoney % 10;
    i5Coins = iMoney / 5;
    iMoney = iMoney % 5;
    i2Coins = iMoney / 2;
    iMoney = iMoney % 2;
    i1Coins = iMoney;
    cout << "Bill(s) of 500 = " << i500Bills << "\nBill(s) of 200 = " << i200Bills << "\nBill(s) of 100 = " << i100Bills << "\nBill(s) of 50 = " << i50Bills << "\nBill(s) of 20 = " << i20Bills << "\nCoin(s) of 10 = " << i10Coins << "\nCoin(s) of 5 = " << i5Coins << "\nCoin(s) of 2 = " << i2Coins << "\nCoin(s) of 1 = " << i1Coins;
    return 0;

}

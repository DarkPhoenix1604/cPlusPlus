#include<iostream>
using namespace std;
float moneyReceived(float currentMoney, float factor = 1.04)
{
    return currentMoney * factor;
}
int main()
{
    float money = 100000;
    cout<<"if you have "<<money<<" rupees in your bank account then you will receive "<<moneyReceived(money)<<" after one year."<<endl;
    cout<<"For VIP if you have "<<money<<" rupees in your bank account then you will receive "<<moneyReceived(money,1.10)<<" after one year."<<endl;
    return 0;
}
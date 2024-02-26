#include<iostream>
using namespace std;
int main()
{
    /* 
    numbers starting from zero are allotted to all elemnts in enum in order
    */
    enum Meal{breakfast, lunch, dinner};
    Meal m1 = lunch;
    cout<<m1<<endl;
    cout<<breakfast<<endl;
    cout<<lunch<<endl;
    cout<<dinner<<endl;
    return 0;
}
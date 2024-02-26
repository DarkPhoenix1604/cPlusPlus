#include<iostream>
int c = 35;
using namespace std;
int main()
{
    /*Built in data types*/
    int a, b, c;
    cout<<"enter the value of a"<<endl;
    cin>>a;
    cout<<"enter the value of b"<<endl;
    cin>>b;
    c = a + b;
    cout<<"The sum is "<<c;
    cout<<endl<<"Value of global variable c is "<<::c;
    return 0;
}
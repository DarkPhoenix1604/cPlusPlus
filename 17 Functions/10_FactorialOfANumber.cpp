#include<iostream>
using namespace std;
int factorial(int n);
int main()
{
    int a;
    cout<<"Enter any number"<<endl;
    cin>>a;
    cout<<"Factorial of "<<a<<" is "<<factorial(a);
    return 0;
}
int factorial(int n)
{
    if(n == 0 )
    {
        return 1;
    }
    else
    return n * factorial(n-1);
}
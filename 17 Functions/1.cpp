#include<iostream>
using namespace std;
/*
function prototype
type function-name(arguments)
*/
int sum(int a,int b); 

int main()
{
    int num1, num2;
    cout<<"Enter first number"<<endl;
    cin>>num1;
    
    cout<<"Enter second number"<<endl;
    cin>>num2;
    
    cout<<"sum is "<<sum(num1, num2);
    return 0;
}
int sum(int a,int b)
{
    /*formal parameters a and b will be taking values 
    from actual parameters num1 and num2*/
    int c = a + b;
    return c;
} 
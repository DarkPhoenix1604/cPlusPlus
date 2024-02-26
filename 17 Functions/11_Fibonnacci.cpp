#include<iostream>
using namespace std;
int fib(int n);
int main()
{
    int n;
    cout<<"Enter any number "<<endl;
    cin>>n;
    cout<<"Fibonnacci elemnt number "<<n<<" is "<<fib(n);
    return 0;
}
int fib(int n)
{
    if ((n == 1 || n == 2))
    {
        return 1;
    }
    else
    return fib(n-1) + fib(n-2);
}
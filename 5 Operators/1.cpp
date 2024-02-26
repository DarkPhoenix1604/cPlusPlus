#include<iostream>
using namespace std;
int main()
{
    int a = 10, b = 2;
    /*operators in C++
    
    1. Arithematic operators */
    cout<<"The value of a + b is "<<a+b<<endl;
    cout<<"The value of a - b is "<<a-b<<endl;
    cout<<"The value of a * b is "<<a*b<<endl;
    cout<<"The value of a / b is "<<a/b<<endl;
    cout<<"The value of a++ is "<<a++<<endl;
    cout<<"The value of a-- is "<<a--<<endl;
    cout<<"The value of ++a is "<<++a<<endl;
    cout<<"The value of --a is "<<--a<<endl;
    cout<<endl;

    /*2. Assignment operators - used to assign values to operators*/
    a = 11;
    char d = 'd';

    /*3. Comparison operators */
    cout<<"The value of a==b is "<<(a==b)<<endl;
    cout<<"The value of a!=b is "<<(a!=b)<<endl;
    cout<<"The value of a>=b is "<<(a>=b)<<endl;
    cout<<"The value of a<=b is "<<(a<=b)<<endl;
    cout<<"The value of a>b is "<<(a>b)<<endl;
    cout<<"The value of a<b is "<<(a<b)<<endl;
    cout<<endl;

    /*4. Logical operators */
    cout<<"The value of ((a==b) && (a<=b)) is "<<((a==b) && (a!=b))<<endl;
    cout<<"The value of ((a==b) || (a!=b)) is "<<((a==b) || (a!=b))<<endl;
    cout<<"The value of (!(a==b)) is "<<(!(a==b))<<endl;
    return 0;
}
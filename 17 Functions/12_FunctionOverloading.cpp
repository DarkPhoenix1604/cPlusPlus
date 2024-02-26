/*function overloading*/
#include<iostream>
using namespace std;
int sum(float a, int b)
{
    return a + b;
}
int sum(int a, int b, int c)
{
    return a + b + c;
}
int main()
{
    cout<<"Sum of 3 and 5 is "<<sum(3, 5)<<endl;
    cout<<"Sum of 3, 6 and 5 is "<<sum(3, 6, 5)<<endl;
    return 0;
}
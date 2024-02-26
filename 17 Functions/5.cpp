#include<iostream>
using namespace std;
int cantModify(int a)
{
    return a;
}
int & modify(int &a)
{
    return a;
}
int main()
{
    int a =5;
    // cantModify(a) = 6;
    cout<<a;
    modify(a) = 55;
    cout<<a;
    return 0;
}
#include<iostream>
using namespace std;
int swap(int *a, int *b);
int main()
{
    int a, b;
    cin>>a>>b;
    cout<<"The value of a is "<<a<<". The value of b is "<<b;
    cout<<endl<<"after swap"<<endl;
    swap(&a, &b);
    cout<<"The value of a is "<<a<<". The value of b is "<<b;
    /* swap because we are calling by reference*/
    return 0;
}
int swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
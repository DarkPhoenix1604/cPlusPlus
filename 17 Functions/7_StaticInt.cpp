#include<iostream>
using namespace std;
int modify(int a, int b);

int main()
{
    int a, b;
    cout<<"Enter the values of a and b"<<endl;
    cin>>a>>b;
    cout<<"The modified value is "<<modify(a, b)<<endl;
    cout<<"The modified value is "<<modify(a, b)<<endl;
    cout<<"The modified value is "<<modify(a, b)<<endl;
    cout<<"The modified value is "<<modify(a, b)<<endl;
    cout<<"The modified value is "<<modify(a, b)<<endl;
    cout<<"The modified value is "<<modify(a, b)<<endl;
    cout<<"The modified value is "<<modify(a, b)<<endl;
    cout<<"The modified value is "<<modify(a, b)<<endl;
    cout<<"The modified value is "<<modify(a, b)<<endl;
    cout<<"The modified value is "<<modify(a, b)<<endl;
    return 0;
}
int modify(int a, int b){
    static int c = 0;/*this executes only once*/
    c = c + 1;/*next time this function is run, the value of c is retained*/
    return a * b + c;
}
/*not recommended to use with inline function*/
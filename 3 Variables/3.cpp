#include<iostream>
using namespace std;

int b = 7, c = 8;//global variable
void sum(){
    int a = 0; //local variable
    cout<<"\nGlobal variable in function: c = "<<c;
}
int main()
{
    int a = 6;
    int c = 0;
    c = 78;
    cout<<"a = "<<a<<"\nb = ";
    cout<<b;
    cout<<"\nc = "<<c;//local variable gets precedence
    sum();
    return 0;
}
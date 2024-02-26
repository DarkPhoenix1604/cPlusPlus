#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<<"Tell me your age\n";
    cin>>age;
    switch(age)
    {
        case 2 : cout<<"you are 2\n";break;
        case 22 : cout<<"you are 22\n";break;
        case 18 : cout<<"you are 18\n";break;
        default : cout<<"no special cases\n";break;
    }
    cout<<"done with switch case";
    return 0;
}
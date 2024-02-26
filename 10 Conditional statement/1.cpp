/*if else statement*/
#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<<"Tell me your age\n";
    cin>>age;
    //slelection control structures
    if(age < 1)
    {
        cout<<"You are not yet born";
    }
    else if(age < 18)
    {
        cout<<"You can not come to the party"<<endl;
    }
    else if(age == 18)
    {
        cout<<"You are a kid and you will get a kid pass to the party"<<endl;
    }
    else
    {
        cout<<"You can come to the party"<<endl;
    }
    return 0;
}
#include<iostream>
using namespace std;
struct employee{
    int eID;
    char favchar;
    float salary;
};
int main()
{
    struct employee harry;
    struct employee ram;
    struct employee rohan;
    harry.eID = 1;
    harry.favchar = 'c';
    harry.salary = 120000;

    cout<<"The value is "<<harry.salary<<endl;;
    cout<<"The value is "<<harry.eID<<endl;;
    cout<<"The value is "<<harry.favchar<<endl;;
    return 0;
}
#include<iostream>
using namespace std;
typedef struct employee{
    int eID;
    char favchar;
    float salary;
} emp;
int main()
{
    emp harry;
    emp ram;
    emp rohan;
    harry.eID = 1;
    harry.favchar = 'c';
    harry.salary = 120000;

    cout<<"The value is "<<harry.salary<<endl;;
    cout<<"The value is "<<harry.eID<<endl;;
    cout<<"The value is "<<harry.favchar<<endl;;
    return 0;
}
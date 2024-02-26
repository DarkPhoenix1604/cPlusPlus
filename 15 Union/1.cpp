#include<iostream>
using namespace std;
/*

in union only one of all the created variables can be used at once 
and the memory allotted to a union is of the size of the largest datatype used

if more than one variable is used then garbage value will be returned
*/
union money{
    int rice;
    char car;
    float pounds;
};
int main()
{
    union money m1;
    m1.rice = 34;
    m1.car = 'c';

    cout<<"The value is "<<m1.rice<<endl;
    return 0;
}
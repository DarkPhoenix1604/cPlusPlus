#include<iostream>
using namespace std;
int main()
{
    int marks[4] = {23,45,56,89};
    int *p = marks;
    cout<<*(p++)<<endl;
    cout<<*(p);
    return 0;
}
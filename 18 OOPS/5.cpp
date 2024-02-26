#include <iostream>
using namespace std;
class Employee
{
    int id;
    static int count;/*error if we assign value to 'count' here*/
public:
    void setData(void){
        cout<<"Enter the id"<<endl;
        cin>>id;
        count++;
    }
    void getData(){
        cout<<"The id of this employee is "<<id<<" and this is employee number "<<count<<endl;
    }
    static void getCount(){
        cout<<"The value of count is "<<count<<endl;
        /*only static variables can be used in static member function*/
    }
};
int Employee :: count = 1000;/*default value is 0 && we can assign value here*/
int main()
{
    Employee harry, rohan, sohan;
    harry.setData();
    harry.getData();
    Employee::getCount();

    rohan.setData();
    rohan.getData();
    Employee::getCount();

    sohan.setData();
    sohan.getData();
    Employee::getCount();

    return 0;
}
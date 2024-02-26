#include <iostream>
using namespace std;
/*Base Class*/
class Employee
{
    int id;

public:
    float salary;
    Employee(int inpId)
    {
        id = inpId;
        salary = 34.0;
    }
    Employee() {}
};
/*Derieved Class*/
/*
syntax

class {{derieved-class-name}} : {{visibility-mode}} {{base-class-name}}
{
    class members/methods/etc...
}
NOTE:
1. Default visibility mode is private
2. Public Visibility Mode: Public members of the base class becomes Public members of the derived class
3. Private Visibility Mode: Public members of the base class become private members of the derived class
4. Private members are never inherited
*/
/*creating a programmer class derieved from employee base class*/
class Programmer : public Employee{
    public:
    int LanguageCode;
    int id;
    Programmer(int inpId)
    {
        id = inpId;
        LanguageCode = 9;
    }
    void getData(){
        cout<<id<<endl;
    }
};
int main()
{
    Employee Harry(1), Rohan(2);
    cout << Harry.salary << endl;
    cout << Rohan.salary << endl;
    Programmer skillF(10);
    cout<<skillF.LanguageCode<<endl;
    cout<<skillF.id<<endl; /*<-- will show error if class is inherited privately*/
    skillF.getData();
    return 0;
}
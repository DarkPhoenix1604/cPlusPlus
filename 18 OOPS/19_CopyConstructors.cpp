#include<iostream>
using namespace std;
class Number{
    int a;
    public:
    Number(int num)
    {
        a = num;
    }
    Number(){
        a = 0;
    }
    /*Copy contructor 
    when no copy constructor is found, compiler runs default copy constructor*/
    Number(Number &obj)
    {
        cout<<"Copy contructor called"<<endl;
        a = obj.a;
    }
    void display()
    {
        cout<<"The number for this object is "<<a<<endl;
    }
};
int main()
{
    Number x, y, z(45), z2;
    x.display();
    y.display();
    z.display();
    Number z1(x);/*copy contructor invoked*/
    z1.display();
    z2 = z;/*copy constructor not invoked*/
    z2.display();
    Number z3 = z;/*copy constructor invoked*/
    z3.display();
    return 0;
}
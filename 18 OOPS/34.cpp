#include <iostream>
using namespace std;
/*
Case1:
class B: public A{
    //Order of execution of constructor - > first A() then B
};

Case2:
class A: public B, public C{
    //order of executiion of constructor - > B( ) then C and A()
};

Case3:
class A: public B, virtual public C{
    //order of execution of constructor - > C() then B() and A()
}
*/
class Base1
{
    int data1;

public:
    Base1(int i)
    {
        data1 = i;
        cout << "Base1 class constructor called" << endl;
    }
    void PrintDataBase1(void)
    {
        cout << "The value of data1 is " << data1 << endl;
    }
};
class Base2
{
    int data2;

public:
    Base2(int i)
    {
        data2 = i;
        cout << "Base2 class constructor called" << endl;
    }
    void PrintDataBase2(void)
    {
        cout << "The value of data2 is " << data2 << endl;
    }
};

class Derieved : public Base2, public Base1
{
    int derieved1, derieved2;

public:
    Derieved(int a, int b, int c, int d) : Base1(a), Base2(b)
    {
        derieved1 = c;
        derieved2 = d;
        cout << "Derieved class constructor" << endl;
    }
};
int main()
{
    Derieved harry(1,2,3,4);
    harry.PrintDataBase1();
    return 0;
}
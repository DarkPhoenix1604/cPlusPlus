#include <iostream>
using namespace std;
/*
Syntax for inheriting in multiple inheritance

class DerievedClass:  visibility-mode base1, visibility-mode base 2
{
    class body of derieved class "DerievedClass"
};
*/

class Base1
{
protected:
    int base1int;

public:
    void set_base1int(int a)
    {
        base1int = a;
    }
};

class Base2
{
protected:
    int base2int;

public:
    void set_base2int(int a)
    {
        base2int = a;
    }
};

class Base3
{
protected:
    int base3int;

public:
    void set_base3int(int a)
    {
        base3int = a;
    }
};

class Derieved : public Base1, public Base2, public Base3
{
public:
    void show()
    {
        cout << "The value of base1int is " << base1int << endl;
        cout << "The value of base2int is " << base2int << endl;
        cout << "The value of base3int is " << base3int << endl;
        cout << "The sum of these values is " << base3int + base1int + base2int << endl;
    }
};

/*
the inherited derieved will look something like this

Data members:
    base1int --> protected
    base2int --> protected
    base3int --> protected

Member function:
    set_base1int() --> public
    set_base2int() --> public
    set_base3int() --> public
    show --> public
*/
int main()
{
    Derieved harry;
    harry.set_base1int(25);
    harry.set_base2int(5);
    harry.set_base3int(15);
    harry.show();
    return 0;
}
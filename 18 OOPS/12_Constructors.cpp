/*constructors in cpp*/
#include<iostream>
using namespace std;
class complex
{
    // Constructor is a special member function with the same name as of the class.
    //It is used to initialize the objects of its class
    //It is automatically invoked whenever an object is created
    int a, b;
public:
    complex(void);
    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};
complex :: complex(void)// ----> This is a default constructor as it accepts no parameters
{
    a = 10;
    b = 0;
}
int main()
{
    complex c1, c2, c3;
    c1.printNumber();
    c2.printNumber();
    c3.printNumber();
    return 0;
}

// Important Characteristics of Constructors in C++:

// A constructor should be declared in the public section of the class
// They are automatically invoked whenever the object is created
// They cannot return values and do not have return types
// It can have default arguments
// We cannot refer to their address
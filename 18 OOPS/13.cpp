#include <iostream>
using namespace std;
class complex
{
    int a, b;

public:
    void printNumber()
    {
        cout << "The number is " << a << " + i" << b << endl;
    }
    complex(int, int);
};
complex ::complex(int x, int y) // ----> This is a parameterized constructor as it takes 2 parameters
{
    a = x;
    b = y;
}
int main()
{
    //implicit call
    complex a(4,6);
    a.printNumber();

    //explicit call 
    complex b = complex(5,6);
    b.printNumber();

    return 0;
}
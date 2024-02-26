#include <iostream>
using namespace std;
class complex
{
    int a, b;

public:
    complex()
    {
        a = 0;
        b = 0;
    }
    complex(int x, int y)
    {
        a = x;
        b = y;
    }
    complex(int x)
    {
        a = x;
        b = 0;
    }
    void printNumber()
    {
        cout << "Your number is " << a << " + i" << b<<endl;
    }
};
int main()
{
    complex c1(4, 6);
    complex c2(4);
    complex c3;
    c1.printNumber();
    c2.printNumber();
    c3.printNumber();
    return 0;
}
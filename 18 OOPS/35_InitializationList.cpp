#include <iostream>
using namespace std;
/*
syntax for initialization list in constructors
constructor (argument-list) : Initialization-section
{
    assignment + other code ;
}

class Test{
    int a;
    int b;
    public:
    Test(int i, int j) : a(i), b(j)
    {
        cout<<"Constructor executed"<<endl;
    }
};
*/
class Test
{
    int a;
    int b;

public:
    // Test(int i, int j) : a(i), b(j)
    // Test(int i, int j) : a(i), b(i + j)
    // Test(int i, int j) : a(i), b(2 * j)
    // Test(int i, int j) : b(j), a(i+ b) - - > This will create problem as a will be initialized first as it is declared first
    Test(int i, int j)
    {
        a = i;
        b = j;
        cout << "Constructor executed" << endl;
        cout << "Value of a is " << a << endl;
        cout << "Value of b is " << b << endl;
    }
};
int main()
{
    Test t(4, 6);
    return 0;
}
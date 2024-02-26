#include <iostream>
using namespace std;
class Complex
{
    int a, b;

public:
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    void printNumber()
    {
        cout << "The number is " << a << " + i" << b << endl;
    }
    friend Complex sumComplex(Complex o1, Complex o2);
};
Complex sumComplex(Complex o1, Complex o2)
{
    Complex o3;
    o3.a = o2.a + o1.a;
    o3.b = o2.b + o1.b;
    return o3;
}
int main()
{
    Complex c1, c2, sum;
    c1.setNumber(1, 4);
    c2.setNumber(5, 8);
    c1.printNumber();
    c2.printNumber();
    sum = sumComplex(c1, c2);
    sum.printNumber();
    return 0;
}
/*
prperties of friend function
1. not in scope of class
2. since it not in the scope of the class, it can nor be callled from the object of that class
    c1.sumComplex() == invalid
3. can be invoked without the help of any objrct
4. usually contains the object
5. can be declared inside public or private sectiion of the class
6. it cannot access the numbers directly by their names and need object_name, number_name to access any members
*/
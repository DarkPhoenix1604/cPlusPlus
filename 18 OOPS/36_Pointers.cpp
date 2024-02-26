#include <iostream>
using namespace std;

class Complex
{
    int real, imaginary;

public:
    void GetData()
    {
        cout << "The real part is " << real << endl;
        cout << "The imaginary part is " << imaginary << endl;
    }
    void setData(int a, int b)
    {
        real = a;
        imaginary = b;
    }
};
int main()
{
    /*Complex c1;
    Complex *ptr = &c1;*/
    Complex *ptr = new Complex;
    // (*ptr).setData(1, 54); is exactly same as
    ptr->setData(1, 54); /*this is called arrow operator*/
    // (*ptr).GetData(); is exactly same is
    ptr->GetData();

    /*array of objects*/
    Complex *ptr1 = new Complex[4];
    ptr1->setData(1, 4);
    ptr1->GetData();
    return 0;
}
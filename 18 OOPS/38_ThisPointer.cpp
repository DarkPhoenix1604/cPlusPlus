#include <iostream>
using namespace std;
/*'this' is a keyword which is a pointer which points to the object which invokes the member function  */
class A
{
    int a;

public:
    // void SetData(int a)
    // {
    //     this->a = a;
    // }
    A & SetData(int a)
    {
        this->a = a;
        return *this;
    }
    void GetData(void)
    {
        cout << "The value of a is " << a << endl;
    }
};
int main()
{
    A a;
    a.SetData(4).GetData();
    a.GetData();
    return 0;
}
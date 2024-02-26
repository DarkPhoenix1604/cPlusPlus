#include <iostream>
using namespace std;

/*
class templates with multiple parameters (one, two or more)
template<class T1, class T2>....(Comma seperated)
class nameOfClass{
    //body
}
*/
template <class T1, class T2>
class myClass
{
public:
    T1 data1;
    T2 data2;
    myClass(T1 a, T2 b)
    {
        data1 = a;
        data2 = b;
    }
    void display()
    {
        cout << this->data1 <<", "<< this->data2;
    }
};

int main()
{
    myClass<char, float> Obj('c', 1.8);
    Obj.display();
    return 0;
}
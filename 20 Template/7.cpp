#include <iostream>
using namespace std;

void func(int a)
{
    cout<<"I am first func() "<<a<<endl;
}

template<class T>
void func(T a)
{
    cout<<"I am templatised func() "<<a<<endl;
}

template<class T>
void func1(T a)
{
    cout<<"I am templatised func1() "<<a<<endl;
}
int main()
{
    func(4);
    func1(4);
    return 0;
}
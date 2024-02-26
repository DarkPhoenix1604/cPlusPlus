#include <iostream>
using namespace std;

class B
{
public:
    void say()
    {
        cout << "Hello World" << endl;
    }
};

class D : public B
{
public:
    void say()
    {
        cout << "Hello my beautiful people" << endl;
    }
    /* D's new say() will over ride B's say() */
};
int main()
{
    B b;
    D d;
    b.say();
    d.say();
    return 0;
}
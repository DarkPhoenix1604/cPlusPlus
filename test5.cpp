#include <iostream>
using namespace std;

class base
{
protected:
    int x;
    int y;

public:
    base(int a = 10, int b = 5)
    {
        x = a;
        y = b;
    }
    void display()
    {
        cout << "x = " << x << " y = " << y;
    }
    base operator+(base b)
    {
        base c;
        c.x = b.x + x;
        c.y = b.y + y;
        return c;
    }
};

class derieved : public base
{
public:
    void display()
    {
        cout << "x = " << x << " y = base" << y;
    }
};
int main()
{
    base a(1, 2), b(4, 6);
    base c = a + b;
    c.display();
    return 0;
}
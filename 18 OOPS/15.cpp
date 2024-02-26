#include<iostream>
#include<cmath>
using namespace std;
class Point{
    int x,y;
public:
    Point(int a, int b)
    {
        x = a;
        y = b;
    }
    void displayPoint()
    {
        cout<<"Point is ("<<x<<", "<<y<<")"<<endl;
    }
    friend void distance(Point h, Point k);
};
void distance(Point h, Point k)
{
    float d = sqrt((h.x - k.x)*(h.x - k.x) + (h.y - k.y)*(h.y - k.y));
    cout<<"The distance is "<<d;
}
int main()
{
    Point p(1,1);
    Point q(4,5);
    distance(p, q);
    return 0;
}
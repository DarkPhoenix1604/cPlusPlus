#include<iostream>
using namespace std;
class simple
{
    int data1;
    int data2;
public:
    simple(int a, int b = 9)/*constructor with default argument*/
    {
        data1 = a;
        data2 = b;
    }
    void printData();
};
void simple :: printData()
{
    cout<<"value of data is "<<data1<<" and "<<data2<<endl;
}
int main()
{
    simple s(1);
    simple s1(1,4);
    s.printData();
    s1.printData();
    return 0;
}
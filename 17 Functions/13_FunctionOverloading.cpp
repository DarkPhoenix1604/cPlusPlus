#include<iostream>
using namespace std;
int volume(int a)
{
    return a * a * a;
}
float volume(int a, double r)
{
    return 3.14 * r * r * a;
}
int volume(int a, int b, int c)
{
    return a * b * c;
}
int main()
{
    cout<<"The volume of cube of side 3 is "<<volume(3)<<endl;
    cout<<"The volume of cylinder of height 3 and radius 6 is "<<volume(3, 6)<<endl;
    cout<<"The volume of cuboid of side 3 , 6 and 5 is "<<volume(3, 6, 5)<<endl;
    return 0;
}
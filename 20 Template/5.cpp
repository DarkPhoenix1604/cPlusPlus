#include <iostream>
using namespace std;

template <class T1, class T2>
float funcAverage(T1 a, T2 b)
{
    float avg = (a + b) / 2;
    return avg;
}

// float funcAverage(int a, int b)
// {
//     float avg = (a + b) / 2.0;
//     return avg;
// }
// float funcAverage(float a, int b)
// {
//     float avg = (a + b) / 2.0;
//     return avg;
// }
// float funcAverage(int a, float b)
// {
//     float avg = (a + b) / 2.0;
//     return avg;
// }
// float funcAverage(float a, float b)
// {
//     float avg = (a + b) / 2.0;
//     return avg;
// }

template<class T>
void swapEm(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}
int main()
{
    float a;
    a = funcAverage<float, float>(5, 2);
    cout << "The average of these numbers is " << a << endl;
    printf("The average of given numbers is %f\n", a);
    int x = 5, y = 7;
    swapEm(x, y);
    cout<<x<<", "<<y;
    return 0;
}
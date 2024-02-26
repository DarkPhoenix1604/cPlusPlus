/*
Create 2 classes:
    1. SimpleCalculator - Takes input of 2 numbers using a utility function and performs +, -, *, / and displays the results using another function.
    2. ScientificCalculator - Takes input of 2 numbers using a utility function and performs any four scientific operations of your choice and displays the results using another function.

    Create another class HybridCalculator and inherit it using these 2 classes:
    Q1. What type of Inheritance are you using?
    Q2. Which mode of Inheritance are you using?
    Q3. Create an object of HybridCalculator and display results of the simple and scientific calculator.
    Q4. How is code reusability implemented?
*/

/*
Answers
1. Multiple inheritance
2. public display mode
3.
*/

#include <iostream>
#include <cmath>
using namespace std;

class SimpleCalculator
{
protected:
    float a, b;

public:
    void SetValue(float c, float d);
    float sum(void);
    float subtract(void);
    float divide(void);
    float multiply(void);
};
void SimpleCalculator::SetValue(float c, float d)
{
    a = c;
    b = d;
}
float SimpleCalculator::sum(void)
{
    return a + b;
}
float SimpleCalculator::subtract(void)
{
    return a - b;
}
float SimpleCalculator::divide(void)
{
    return a / b;
}
float SimpleCalculator::multiply(void)
{
    return a * b;
}

class ScientificCalculator
{
protected:
    float a, b;

public:
    void setValue(float c, float d)
    {
        a = c;
        b = d;
    }
    float power(void)
    {
        return pow(a, b);
    }
    float log(void)
    {
        return ((log2(a)) / (log2(b)));
    }
    float root(void)
    {
        float c = 1 / b;
        return pow(a, c);
    }
    float squareSum()
    {
        return (pow(a, 2) + pow(b, 2));
    }
};

class HybridCalculator : public SimpleCalculator, public ScientificCalculator
{
public:
    void value(float c, float d)
    {
        SetValue(c, d);
        setValue(c, d);
    }
};

int main()
{
    int h, k;
    HybridCalculator a;
    cout<<"Enter the values of h and k"<<endl;
    cin>>h>>k;
    a.value(h, k);

    cout << "h + k is " << a.sum() << endl;
    cout << "h - k is" << a.subtract() << endl;
    cout << "h divided by k gives " << a.divide() << endl;
    cout << "h * k is " << a.multiply() << endl;

    cout << "h to the power k is " << a.power() << endl;
    cout << "log(h) with base k is " << a.log() << endl;
    cout << "fifth root of h is " << a.root() << endl;
    cout << "sum of squares of h and k are " << a.squareSum() << endl;
    return 0;
}
/*
4. code reused in HybridCalculator
*/
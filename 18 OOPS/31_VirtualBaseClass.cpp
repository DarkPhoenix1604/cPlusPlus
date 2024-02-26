#include<iostream>
using namespace std;

int main()
{
    return 0;
}

/*
                A
            /       \
            |        |
            B     C
            |        |
            \       /
                D

B and C are inherited from A
D is inherited from B and C
so D contains the elements of A twice
to avoid repetition of elements of A in D, A is made into a virtual base class
*/
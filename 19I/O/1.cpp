#include <iostream>
#include<fstream>

/*
The usefull classes for working with files in C++ are:
1. fstreambase
2. ifstream - -> derieved from fstreambase
3. ofstream - -> derieved from fstreambase

In order to work with files in C++, you will have to open it. Primarily, there are 2 ways to open a file:
1. Using the constructor
2. Using the member function open() of class

*/
using namespace std;

int main()
{
    string st = "Harry Bhai";
    string st2;
    /*opening files using constructor and writing it*/
    ofstream out("sample1.txt"); //wirte operation
    out<<st;

    /*opening files using constructor and reading it*/
    ifstream in("sample2.txt");
    // in>>st2;
    getline(in, st2);
    cout<<st2;
    return 0;
}
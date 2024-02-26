#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    /*connecting our file with hout stram*/
    ofstream hout("sample1.txt");

    /*creating a name string and filling it with the string entered by the user*/
    cout << "Enter your name" << endl;
    string name;
    cin >> name;

    /*writing a string to the file*/
    hout << name + " is my name";

    hout.close();

    ifstream hin("sample1.txt");
    string content;
    hin >> content;
    cout << "The content of this file is: " << content;
    hin.close();
    return 0;
}
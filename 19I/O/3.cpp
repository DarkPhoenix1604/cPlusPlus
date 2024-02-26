#include <iostream>
#include <fstream>
#include<string>
using namespace std;
int main()
{
    ofstream out;
    out.open("sample1.txt");
    out << "This is me\n";
    out << "me is this\n";
    out << "is this me\n";
    out << "this me is";
    out.close();

    ifstream in;
    string st;
    in.open("sample1.txt");
    while (in.eof() == 0)
    {
        getline(in, st);
        cout<<st<<endl;
    }
    
    in.close();
    return 0;
}
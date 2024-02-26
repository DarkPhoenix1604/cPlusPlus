//two typees of header files:
//system header files: it comes with the compiler
#include<iostream>
//user defined header files
#include"file.h" /*this will produce error if file.h is not present in the current directory*/
int main()
{
    std::cout<<"Hello World";
    return 0;
}
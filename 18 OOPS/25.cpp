#include <iostream>
using namespace std;

class Base
{
protected: /*like private but can be inherited*/
    int a;

private:
    int b;
};

/*

 	                                            Public Derivation      	Private Derivation    	Protected Derivation
Private members           	        Not Inherited             Not Inherited              Not Inherited              
Protected members           	  Protected                  Private                        Protected                    
Public members           	         Public	                       Private                       Protected            

*/

class Derieved : protected Base
{
};

int main()
{
    Base b;
    Derieved d;
    // cout<<b.a; -->will not work as 'a' is protected in both base as well as derieved class
    return 0;
}
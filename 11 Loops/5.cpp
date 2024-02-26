#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int i = 1, n;
    cout<<"Enter the number you want table of "<<endl;
    cin>>n;
    do
    {
        cout<<n<<" * "<<setw(2)<<i<<" = "<<setw(4)<<n * i<<endl;
        i++;
    } while (i<=10);
    
    return 0;
}

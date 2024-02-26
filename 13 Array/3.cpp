#include<iostream>
using namespace std;
int main()
{
    int arr[] = {4,5,1,8}, n = 0;
    for (int i = 0; i < 4; i++)
    {
        cout<<i<<" element is "<<arr[i]<<endl;
    }
    while (n < 4)
    {
        cout<<n<<" element is "<<arr[n]<<endl;
        n++;
    }
    n = 0;
    do
    {
        cout<<n<<" element is "<<arr[n]<<endl;
        n++;
    } while (n<4);
    
    
    return 0;
}
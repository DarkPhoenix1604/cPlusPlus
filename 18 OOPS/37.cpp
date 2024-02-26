#include <iostream>
using namespace std;

class ShopItem
{
    int id;
    float price;

public:
    void SetData(int a, float b)
    {
        id = a;
        price = b;
    }
    void GetData(void)
    {
        cout << "Code of this item is " << id << endl;
        cout << "The price of this item is " << price << endl;
    }
};
int main()
{
    int size = 3;
    int p;
    float q;
    ShopItem *ptr = new ShopItem[size];
    ShopItem *ptrTemp = ptr;
    for (int i = 0; i < size; i++)
    {
        cout << "Id and price of item " << i + 1 << endl;
        cin >> p >> q;
        ptr->SetData(p, q);
        ptr++;
    }
    for (int j = 0; j < size; j++)
    {
        cout << "Item number " << j + 1 << endl;
        ptrTemp->GetData();
        ptrTemp++;
    }

    return 0;
}
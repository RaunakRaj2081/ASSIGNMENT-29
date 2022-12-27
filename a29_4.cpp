/*4. Create Product class and convert Product type to Item type using casting operator
int main()
{
 Item i1;
 Product p1;
 p1.setData(3,4);
 i1=p1;
 return 0;
}*/

#include<iostream>
using namespace std;
class Item
{
    int x;
    public:
    Item()
    {

    }
    Item(int p)
    {
        x=p;
    }
    void display()
    {
        cout<<"value = "<<x;
    }

};
class Product
{
    int a,b;
    public:
    Product()
    {

    }
    void setData(int p,int q)
    {
        a=p;
        b=q;
    }
    operator Item()
    {
        Item i(a*b);
        return i;      

    }
};
int main()
{
  Item i1;
 Product p1;
 p1.setData(3,4);
 i1=p1;
 i1.display();
 return 0;  
}
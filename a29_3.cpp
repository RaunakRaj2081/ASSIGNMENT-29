/*3. Create a Product class and convert Product type to Item type using constructor
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
class Product
{
    int a,b;
    public:
    Product()
    {

    }
    int get()
    {
        return a+b;
    }
    void setData(int x,int y)
    {
        a=x;
        b=y;
    }

};
class Item
{
    int c;
    public:
    Item()
    {

    }
    Item(Product p)
    {
        cout<<"product type converted to Item type"<<endl;
        c= p.get();
    }
    void display()
    {
        cout<<"value in Item type from product type : "<<c;
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

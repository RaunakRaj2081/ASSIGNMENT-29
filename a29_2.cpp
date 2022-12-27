/*2. Write a C++ program to convert Complex type to Primitive type.
 Example -
 int main()
{
 Complex c1;
 c1.setData(3,4);
 int x;
 x=c1;
 return 0;
}*/

#include<iostream>
using namespace std;
class complex
{
    int real,imag,x;
    public:
    complex()
    {

    }
    void setData(int x,int y)
    {
        real=x;
        imag=y;
    }
    operator int()
    {
        cout<<"int () called for complex ";
        return x;
    }
};
int main()
{
 complex c1;
 c1.setData(3,4);
 int x;
 x=c1;
 return 0;
}

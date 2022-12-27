/*1.Write a C++ program to convert Primitive type to Complex type.
 Example -
 int main()
{
 Complex c1;
 Int x=5;
 c1=x;
 return 0;
} */

#include<iostream>
using namespace std;
class complex
{
    int p;
    int real;
    int imag;
    public:
    complex()
    {

    }
    complex(int p)
    {
        real=p;
        imag=p;
    }
    void display()
    {
        cout<<"Real = "<<real<<"   Imag = "<<imag;
    }
};
int main()
{
 complex c1;
 int x=5;
 c1=5;
 c1.display();
 return 0;

}
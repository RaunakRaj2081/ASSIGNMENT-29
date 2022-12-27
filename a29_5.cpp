/*5. Create two classes Invent1 and Invent2 and also add necessary constructors in it. Now add 
functions to support Invent1 to float and Invent1 to Invent2 type.
Example -
float main()
{
 Invent1 s1=(4,5);
 Invent2 d1;
 float tv;
 tv=s1;
 d1=s1;
 return 0;
}
*/

#include<iostream>
using namespace std;
class Invent1
{
    float a,b;
    int n;
    public:
    Invent1(float x,float y)
    {
        a=x;
        b=y;
    }
    float get()
    {
        return a+b; 
    }
    operator float()
    {
        cout <<"Invent1 converted to float "<<endl;
        float p;
        p=a*b;
        cout<<"value in float = "<<p<<endl;
    }
    operator int()
    {
        
        return n;
    }

};
class Invent2
{
  float s;
  public:
  Invent2()
  {

  }
   Invent2(Invent1 i)
   {
    cout<<"Invent1 converted to Invent2 "<<endl;
    s=i.get();
    cout<<"Invent2 value : "<<s<<endl;

   }
};
int main()
{
 Invent1 s1(4,5);
 Invent2 d1;
 float tv;
 tv=s1;
 d1=s1;
 return 0;
}

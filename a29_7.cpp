/*7. Create two class Time and Minute and add required getter and setter including constructors. 
Now you need to type cast Time object into Minute to fetch the minute from Time and display it.
Example -
int main()
{
 Time t1(2,30);
 t1.display();
 Minute m1;
 m1.display();
 m1=t1 // Fetch minute from time
 t1.display();
 m1.display();
 return 0;
}
*/

#include<bits/stdc++.h>
using namespace std;
class Time
{
    int a,b;
    public:
    Time(int t,int m)
    {
        a=t;
        b=m;
    }
    int get1()
    {
        return a;
    }
    int get2()
    {
        return b;
    }

    void display()
    {
        cout<<"The time is : "<<a<<" hours "<<b<<" minutes "<<endl;
    }
};
class Minute
{
    int e;
    public:
    Minute()
    {

    }
    Minute(Time t1)
    {
      cout<<"Time class converted to Minute class "<<endl;
      e=t1.get1()*60+t1.get2();
      
    }
    void display()
    {
         cout<<"The Time in minutes is : "<<e<< " minutes"<<endl;
    }
};
int main()
{
    Time t1(2,30);
    t1.display();
    Minute m;
    m=t1;
    m.display();
    return 0;
}
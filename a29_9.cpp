/*9. Create a Dollar class and add necessary functions to support float to Dollar type conversion.
Example
float main()
{
 float x = 50;
Dollar d;
d = x;
d.display();
 return 0;
}
*/

#include<iostream>
using namespace std;
class Dollar
{
    float x;
    public:
    Dollar()
    {

    }
    Dollar(float p)
    {
        cout<<"float converted to Dollar"<<endl;
        x=p;
    }
    void display()
    {
        cout<<"Dollar : "<<x/81;
    }
};
int main()
{
 float x = 50;
 Dollar d;
d = x;
d.display();
 return 0;
}
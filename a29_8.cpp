/*8. Create a Rupee class and convert it into int. And Display it.
Example
int main()
{
 Rupee r = 10;
 int x = r;
cout<<x;
 return 0;
*/

#include<bits/stdc++.h>
using namespace std;
class Rupee
{
    int x;
    public:
    Rupee(int e)
    {
        x=e;
    }

    
    operator int()
    {
      cout<<"Rupee class converted to int "<<endl;
      return x;
    }

};
int main()
{
 Rupee r=10;
 int x = r;
cout<<x;
 return 0;
}

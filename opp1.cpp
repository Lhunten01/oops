#include<bits/stdc++.h>
using namespace std;
class opp1
{
private:
    void InnerFunction(int x)
    {
        cout<<"i am the inner function value passed is "<<x;
    }
public:
   void OuterFunc(int y)
   {
    cout<<endl<<"outer function is called ="<<y<<endl;
    InnerFunction(y+1);
   }
};

int main()
{
   opp1 obj1;
   obj1.OuterFunc(3);
   return 0;
}

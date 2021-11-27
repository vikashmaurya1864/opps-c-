#include<iostream>
using namespace std;
class maths
{
    public:
    maths(int x, int y)
    {
      int sum;
      sum=x+y;
      cout<<"sum of your number is "<<sum<<endl;  
    }
    ~maths()
    {
        cout<<"destructor invoked "<<endl;
    }
};
int main()
{
    int p,q;
    cin>>p>>q;
    maths obj1(p,q);
}
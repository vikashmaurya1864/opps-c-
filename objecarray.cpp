#include<iostream>
using namespace std;
class lpu{
    int a;
    public:
    int setdata(int b)
    {
        a=b;
    }
    void show()
    {
        cout<<"this is you number  "<<a<<endl;
    }

};
int main()
{
    lpu *p;
    lpu obj;
    *p = &obj;
}
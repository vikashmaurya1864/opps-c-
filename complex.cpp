#include <iostream>
using namespace std;
class complex
{
    int a; 
    int b;
    public:
    void setdata(int v1, int v2 )
    { 
        a=v1;
        b=v2;
    }
    void printdata( void )
    {
        cout<<"this is your complex no is "<<a<<" "<<"+ "<<b<<"i"<<endl;
    }
};
//we are going to make friend fuction
sumcomplex complex (complex o1,complex o2)
{
    complex o3;
    o3.setnumber((o1.a+o2.a),(o1.b+o2.b));
    return o3;
}
int main()
{
    complex c1,c2,c3;
    c1.setdata(2,8);
    c1.printdata();
    c2.setdata(3,5);
    c2.printdata();
    
}
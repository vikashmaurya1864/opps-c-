#include<iostream>
using namespace std;
class Baseclass
{ 
    public:
    int var_base=1;
    virtual void display ()
    {
        cout<<"111 this is base class "<<var_base<<endl;
    }
};
class derivedclass
{
    public:
    int derived_base=2;
    void display()
    {
        cout<< "222 this is derived class "<<derived_base<<endl;
    }
};
int main()
{
    Baseclass *ptrofbaseclass;
    derivedclass *pointerofderivedclass;
    Baseclass objectofbaseclass;
    derivedclass objectofderivedclass;
    ptrofbaseclass=&objectofbaseclass;
    pointerofderivedclass = &objectofderivedclass;
    ptrofbaseclass->display();
    pointerofderivedclass->display();
    return 0;
}
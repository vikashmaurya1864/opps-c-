#include<iostream>
using namespace std;

class vehicle
{    
    public:
    //problem is here baby you are inherited only public section;
    //we are going to make constructor here
    vehicle()
    {
        cout<<"guys this is vehicle class ";
    }
};
//here we are going to create derived class here
class tata : public vehicle
{    
    public:
    //we are not defind something here maybe i work
};
int main()
{
    tata car ;
}
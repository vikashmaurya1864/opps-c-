#include<iostream>
using namespace std;

class lpu
{   
    public:
    int fees;
};
 
class mca : public lpu
{
    public:
    int placement;
};

int main()
{
    mca obj;
    obj.fees=90000;
    obj.placement=1000000;
    cout<<" this is fees "<<obj.fees<<" this is your placement "<<obj.placement<<endl;
}
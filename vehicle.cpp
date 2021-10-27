#include<iostream>
using namespace std;

class vehicle
{   
    public:
    vehicle(){
    cout<<"this is vehicle class "<<endl;}
};

class car : public vehicle
{
  public:
  car(){
  cout<<"this is car class "<<endl;}
};
//we are gone to inhertiated two class here;
class tata: public vehicle , public car
{   

  //it made we are gone call it
};
int main()
{
    tata obj;
}


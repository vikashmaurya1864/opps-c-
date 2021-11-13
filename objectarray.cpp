#include<iostream>
using namespace std;
class shopitem
{
    int id , price;
    public:
    void setdata(int a, int b) 
    {
        id=a;
        price=b;
    }
    void getdata(void)  //give some comment of this code this is fuction 
    {
        cout<<"this is your id "<<id<<endl;
        cout<<"price of this item is "<<price<<endl;
    }
};
int main()
{
    int size =3;
    shopitem  *ptr = new shopitem[size];//this keyword are \\{new shopitem *ptr = new shopitem[3]}
    shopitem *ptrtemp = ptr;            //*ptr is array of object is a tough for understaning
                                        //
    int p,i,q;
    for(i=0; i<size; i++)
    {
        cout<<"enter the id and price of item "<<i+1<<endl;
        cin>>p>>q;
        (*ptr).setdata(p,q);//another method is ptr->setdata(p,q)
        ptr++;
    } 
    for (i=0; i<size; i++)
    {
    
        ptrtemp->getdata();
        ptrtemp++;
    }
    cout<<"first program is end \n"<<endl;
    (*ptr--).getdata();
    (*ptr--).getdata();   
    (*ptr--).getdata();
    (*ptr--).getdata();
    (*ptr--).getdata();


}
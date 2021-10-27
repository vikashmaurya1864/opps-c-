#include<iostream>
using namespaces std;
class muuna
{
    int data1;
    int data2;
    int data3;
    public:
    void munna(int a, int b=10; int c=9)
    {
        data1 = a;
        data2 = b;
        data3 = c;
    }
    void munna(void)
    {
        cout<<"this is data1 "<<data1<<" this is data2 "<<data2<<" this is data3 "<<data3<<endl;
    }
};
int main()
{
    muuna obj(12);
    

}
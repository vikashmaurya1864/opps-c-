#include <iostream>
using namespace std;

class bankdeposit
{
    int pricipal;
    int years;
    float interestrate;
    float returnvalue;

public:
    bankdeposit() {}
    bankdeposit(int p, int y, float r); //here r valuer like .4
    bankdeposit(int p, int y, int r);   //here r value like 4%
    void show();
};

bankdeposit ::bankdeposit(float r, int y,int p)
{
    pricipal = p;
    years = y;
    interestrate = r;
    returnvalue = pricipal;
    for (int i = 0; i < y; i++)
    {
        returnvalue = returnvalue * (1 + interestrate);
    }
}

bankdeposit ::bankdeposit(int p, int y, int r)
{
    pricipal = p;
    years = y;
    interestrate = float(r) / 100;
    returnvalue = pricipal;
    for (int i = 0; i < y; i++)
    {
        returnvalue = returnvalue * (1 + interestrate);
    }
}
void bankdeposit ::show()
{
    cout << "pricipal amount is " << pricipal << endl;
    cout << "return value after " << years << endl;
    cout << " final amount is " << returnvalue << endl;
}
int main()
{
    bankdeposit bd1( 123 , 3, 0.09);
    bd1.show();
}
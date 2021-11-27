#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    string mytext;
    ifstream filestream ("vikash.txt");
    if (filestream.is_open())
    {
        while (getline(filestream,mytext))
        {
            cout<<mytext<<endl;
        }
        filestream.close();
    }
    else{
        cout<<"flie opening is fail "<<endl;
    }
}
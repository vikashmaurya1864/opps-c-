#include<iostream>
#include<fstream>
using namespace std;
int main()
{
  ofstream filestream("vikash.txt");
  if(filestream.is_open())
  {
      filestream<< "welcome to allhabad \n";
      filestream << " and phgwara . \n";
      filestream.close();
  }
  else{
      cout<<"file is not opened ";
  }
} 

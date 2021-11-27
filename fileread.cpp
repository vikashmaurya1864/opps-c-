#include<iostream>
#include<fstream>
using namespace std;
int main()
{
   char content[1000] ;
   cout<<"enter your content in files"<<endl;
   cin.getline(content,1000);

   ofstream file( "vikashmaurya.txt");
   if(ofstream.is_open())
   {file<<content;
   file.close();
   cout<<"file write operation performed successfully"<<endl;
   }
   cout<<"we are starting read file operation "<<endl;
   char arr1[1000];
   ifstream obj("vikash.txt");
   obj.getline(arr1,1000);
   cout<<"array content asdf12r4 \n "<<arr1;
}
#include <iostream>
using namespace std;

int main (){

    //dynamically allocating string
    int* intergervalue = new int;
   // dynamically allocating string
   string* stringValue = new string;

   cout<<"Enter the value of integer"<<endl;
   cin>>*intergervalue;

   cout<<"Enter the value of string"<<endl;
   cin>>*stringValue;

   cout<<*intergervalue<<endl;
   cout<<*stringValue<<endl;



}
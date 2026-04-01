#include<iostream>
#include<string>
using namespace std;

int main (){

    string sstrings[] = {"B123","C234","A345","C15","B177","G3003","C235","B179"};

    int length = sizeof(sstrings);

    for(int i = 0;i<length;i++){
        if(sstrings[i].front()=='B')
            cout<<sstrings[i]<<endl;
    }



   return 0;
}

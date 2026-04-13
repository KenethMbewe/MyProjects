#include <iostream>
using namespace std;

int main(){
    int rows;
    int columns;

    cout<<"Enter the number of rows between 1 and 3"<<endl;
    cin>>rows;

    //row not to exceed 3 or less
    while (rows< 1 || rows > 3){
        cout<<"Rows must be between 1 and 3.Try again"<<endl;
        cout<<"Enter the number of rows between 1 and 3"<<endl;
        cin>>rows;
    }

    cout<<"Enter the number of columns beteeen 1 and 3"<<endl;
    cin>>columns;

     //columns not to exceed 3 or less
     while(columns < 1 || columns > 3){

        cout<<"columns must be between 1 and 3.Try again"<<endl;
        cout<<"Enter the number of colums between 1 and 3"<<endl;
        cin>>columns;

     }

     double** dynamic2D = new double*[rows];
     for(int i = 0; i<rows;i++){
        dynamic2D[i] = new double[columns];
     }

     //getting the values of array from user
     cout<<"Enter the values of of the array"<<endl;
     for(int i = 0; i<rows; i++){
        for(int j = 0; j<columns; j++){
            cin>>dynamic2D[i][j];
        }
     }

     //outputing the values of array
    for(int i = 0; i<rows;i++){
        for(int j =0;j<columns;j++){
            cout<<dynamic2D[i][j]<<" ";
        }
    }


 return 0;
}
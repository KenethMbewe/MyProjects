#include <iostream>
using namespace std;

//functions of calculating Areas of square,rectangle and triangle
double square(double side){
   double area = side*side;

    return area;
}

double rectangle(double length,double width){
    double area = length*width;
    return area;
}

double triangle(double base,double height){
    double area = 0.5*base*height;
    return area;

}


int main (){
    int choice;

    while(true){

        cout<<"please select the area of a shape to calculate"<<endl;
        cout<<"1.Square"<<endl;
        cout<<"2.Rectangle"<<endl;
        cout<<"3.Triangle"<<endl;
        cout<<"4.Quit program"<<endl;

        cout<<"Enter selection"<<endl;
        cin>>choice;

        if(choice<1 || choice> 4){
            cout<<"invalid selection .please try again"<<endl;
            continue;
        }

        if(choice==4){
            cout<<"You Quit program"<<endl;
            break;
        }
        double result;

        if(choice==1){
            double side;
            cout<<"Enter side: "<<endl;
            cin>>side;
            result=square(side);
        }

        else if(choice==2){
            double length,width;
            cout<<"Enter length and width respectively"<<endl;
            cin>>length;
            cin>>width;
            result = rectangle(length,width);
        }
        else if(choice==3){
            double base,height;
            cout<<"Enter base and height respectively"<<endl;
            cin>>base;
            cin>>height;
            result = triangle(base,height);

        }

        cout<<"The area is: "<<result<<endl;



             }

 return 0;
}
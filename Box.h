#pragma once
#include <iostream>
using namespace std;


class Box{

    public:

    Box();
    ~Box();
    Box(const double newLength,const double newBreadth, const double newHeight );
    double GetVolume();
    void SetLength(double len);
    void SetBreadth(double bre);
    void SetHeight(double hei);

    //overloaded + operator to add two object 
    Box operator+(const Box& b);

    private:
    double length; //length of box 
    double breadth; // breadth of box 
    double height; //height of box


};
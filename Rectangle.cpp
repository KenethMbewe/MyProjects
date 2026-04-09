#include <iostream>
#include "Rectangle.h"

using namespace std;

// Default constructor
Rectangle::Rectangle() {
    length = 0.0;
    width = 0.0;
}

// Overloaded constructor
Rectangle::Rectangle(float l, float w) {
    length = l;
    width = w;
}

// Destructor
Rectangle::~Rectangle() {
    // nothing to destroy
}

// Assign values
void Rectangle::assign() {
    cout << "Enter length and width:" << endl;
    cin >> length >> width;
}

// Display values
void Rectangle::retrieve() {
    cout << "Length: " << length << endl;
    cout << "Width: " << width << endl;
}

// Calculate area
float Rectangle::areaRectangle() {
    return length * width;
}
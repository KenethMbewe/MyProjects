#include <iostream>
#include "Rectangle.h"

using namespace std;

int main() {
    // First object (using assign)
    Rectangle rect1;

    rect1.assign();
    rect1.retrieve();

    cout << "Area of rectangle 1: " << rect1.areaRectangle() << endl;

    // Second object (using constructor)
    float l, w;

    cout << "\nEnter length and width for second rectangle:" << endl;
    cin >> l >> w;

    Rectangle rect2(l, w);

    rect2.retrieve();

    cout << "Area of rectangle 2: " << rect2.areaRectangle() << endl;

    return 0;
}
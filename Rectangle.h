#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle {
private:
    float length;
    float width;

public:
    // Constructors
    Rectangle();
    Rectangle(float l, float w);

    // Destructor
    ~Rectangle();

    // Functions
    void assign();        // setter
    void retrieve();      // getter
    float areaRectangle();// area
};

#endif
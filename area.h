#ifndef AREA_H
#define AREA_H

#include "Square.h"
#include "Triangle.h"
#include "Circle.h"

class Area {
public:
    static float calculateSquareArea(shapes::Square s);
    static float calculateTriangleArea(shapes::Triangle t);
    static float calculateCircleArea(shapes::Circle c);
};

#endif
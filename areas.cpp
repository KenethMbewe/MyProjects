#include "Area.h"

float Area::calculateSquareArea(shapes::Square s) {
    return s.getSide() * s.getSide();
}

float Area::calculateTriangleArea(shapes::Triangle t) {
    return 0.5 * t.getBase() * t.getHeight();
}

float Area::calculateCircleArea(shapes::Circle c) {
    return 3.142 * c.getRadius() * c.getRadius();
}
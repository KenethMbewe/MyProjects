#include <iostream>
#include "Square.h"
#include "Triangle.h"
#include "Circle.h"
#include "Area.h"

using namespace std;
using namespace shapes;

int main() {

    int choice;

    do {
        cout << "calculating areas" << endl;
        cout << "1. Square" << endl;
        cout << "2. Triangle" << endl;
        cout << "3. Circle" << endl;
        cout << "4. Quit" << endl;
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1) {
            float side;
            cout << "Enter side: ";
            cin >> side;

            Square s(side);
            cout << "Area = " << Area::calculateSquareArea(s) << endl;
        }

        else if (choice == 2) {
            float base, height;
            cout << "Enter base: ";
            cin >> base;
            cout << "Enter height: ";
            cin >> height;

            Triangle t(base, height);
            cout << "Area = " << Area::calculateTriangleArea(t) << endl;
        }

        else if (choice == 3) {
            float radius;
            cout << "Enter radius: ";
            cin >> radius;

            Circle c(radius);
            cout << "Area = " << Area::calculateCircleArea(c) << endl;
        }

    } while (choice != 4);

    return 0;
}
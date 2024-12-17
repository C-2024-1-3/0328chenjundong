#include <iostream>
#include "point.h"

using namespace std;

Point::Point(int i, int j) {
    x = i;
    y = j;
}

void Point::setPoint(int i, int j) {
    x = 60 + i;
    y = 80 + j;
}

void Point::display() const {
    cout << "(" << x << ", " << y << ")" << endl;
}

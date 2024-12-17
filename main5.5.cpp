#include <iostream>
#include "point.h"

using namespace std;

int main() {
    Point p;
    cout << "初始位置：";
    p.display();
    p.setPoint(10, 20);
    cout << "修改后位置：";
    p.display();

    return 0;
}

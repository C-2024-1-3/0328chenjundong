#include <iostream>
#include "point.h"

using namespace std;

int main() {
    Point p;
    cout << "��ʼλ�ã�";
    p.display();
    p.setPoint(10, 20);
    cout << "�޸ĺ�λ�ã�";
    p.display();

    return 0;
}

#include <iostream>
#include "box.h"

using namespace std;

// ���ó������ĳ�������
void Box::setDimensions(float l, float w, float h) {
    length = l;
    width = w;
    height = h;
}

// ���㳤���������
float Box::volume() const {
    return length * width * height;
}
void Box::displayVolume() const {
    cout << "�������������: " << volume()<< endl;
}

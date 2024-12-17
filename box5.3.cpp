#include <iostream>
#include "box.h"

using namespace std;

// 设置长方柱的长、宽、高
void Box::setDimensions(float l, float w, float h) {
    length = l;
    width = w;
    height = h;
}

// 计算长方柱的体积
float Box::volume() const {
    return length * width * height;
}
void Box::displayVolume() const {
    cout << "长方柱的体积是: " << volume()<< endl;
}

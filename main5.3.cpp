#include <iostream>
#include "box.h"

using namespace std;

int main() {
    Box box1, box2, box3;

    float l, w, h;
    cout << "输入第一个长方柱的长、宽、高:";
    cin >> l >> w >> h;
    box1.setDimensions(l, w, h);

    cout << "输入第二个长方柱的长、宽、高 :";
    cin >> l >> w >> h;
    box2.setDimensions(l, w, h);

    cout << "输入第三个长方柱的长、宽、高:";
    cin >> l >> w >> h;
    box3.setDimensions(l, w, h);
    cout << "第一个";
    box1.displayVolume();

    cout << "第二个";
    box2.displayVolume();

    cout << "第三个";
    box3.displayVolume();

    return 0;
}

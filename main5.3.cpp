#include <iostream>
#include "box.h"

using namespace std;

int main() {
    Box box1, box2, box3;

    float l, w, h;
    cout << "�����һ���������ĳ�������:";
    cin >> l >> w >> h;
    box1.setDimensions(l, w, h);

    cout << "����ڶ����������ĳ������� :";
    cin >> l >> w >> h;
    box2.setDimensions(l, w, h);

    cout << "����������������ĳ�������:";
    cin >> l >> w >> h;
    box3.setDimensions(l, w, h);
    cout << "��һ��";
    box1.displayVolume();

    cout << "�ڶ���";
    box2.displayVolume();

    cout << "������";
    box3.displayVolume();

    return 0;
}

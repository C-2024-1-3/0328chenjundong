#include <iostream>
#include "student.h"

using namespace std;

int main() {
    const int size = 5;
    Student students[size]; 
    for (int i = 0; i < size; ++i) {
        int id;
        float score;
        cout << "��" << i + 1 << " ��ѧ����ѧ����:";
        cin >> id;
        cout << "��" << i + 1 << "��ѧ���ķ�����:";
        cin >> score;
        students[i] = Student(id, score);
    }

    max(students, size);

    return 0;
}

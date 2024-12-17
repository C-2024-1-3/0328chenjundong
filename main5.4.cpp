#include <iostream>
#include "student.h"

using namespace std;

int main() {
    const int size = 5;
    Student students[size]; 
    for (int i = 0; i < size; ++i) {
        int id;
        float score;
        cout << "第" << i + 1 << " 个学生的学号是:";
        cin >> id;
        cout << "第" << i + 1 << "个学生的分数是:";
        cin >> score;
        students[i] = Student(id, score);
    }

    max(students, size);

    return 0;
}

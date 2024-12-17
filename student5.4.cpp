#include <iostream>
#include "student.h"

using namespace std;
int Student::getId() const {
    return id;
}

float Student::getScore() const {
    return score;
}
void max(Student* students, int size) {
    int maxIndex = 0; 
    for (int i = 1; i < size; ++i) {
        if (students[i].getScore() > students[maxIndex].getScore()) {
            maxIndex = i;
        }
    }
    cout << "最高分学生的学号是: " << students[maxIndex].getId() << endl;
}

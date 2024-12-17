#ifndef STUDENT_H
#define STUDENT_H

class Student {
public:
    Student(int id = 0, float score = 0.0) : id(id), score(score) {}
    int getId() const;    
    float getScore() const;  

private:
    int id;     
    float score;
};

void max(Student* students, int size);

#endif

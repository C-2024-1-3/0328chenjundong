#ifndef POINT_H
#define POINT_H

class Point {
public:
    Point(int i = 60, int j = 80);
    void setPoint(int i, int j);
    void display() const;

private:
    int x;
    int y;
};

#endif

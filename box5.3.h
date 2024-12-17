#ifndef BOX_H
#define BOX_H

class Box {
public:
    // 成员函数声明
    void setDimensions(float l, float w, float h); // 设置长、宽、高
    float volume() const; // 计算体积
    void displayVolume() const; // 输出体积

private:
    float length;
    float width; 
    float height;
};

#endif

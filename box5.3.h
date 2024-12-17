#ifndef BOX_H
#define BOX_H

class Box {
public:
    // ��Ա��������
    void setDimensions(float l, float w, float h); // ���ó�������
    float volume() const; // �������
    void displayVolume() const; // ������

private:
    float length;
    float width; 
    float height;
};

#endif

#include <iostream>
#include "student.h"           //��Ҫ©д���У��������ͨ����

void Student::display()         // �����ⶨ�� display �ຯ��
{
    std::cout << "num: " << num << std::endl;
    std::cout << "name: " << name << std::endl;
    std::cout << "sex: " << sex << std::endl;
}

void Student::set_value(int n, const char* nme, char s) // ���� set_value ����
{
    num = n;
    strncpy_s(name, sizeof(name), nme, _TRUNCATE);
    sex = s;
}

#include <iostream>
#include "student.h"            // ��������ͷ�ļ���������

int main()
{
    Student stud;                // �������
    stud.set_value(007, "tcg", 'm'); 
    stud.display();             //ִ��stud�����display����

    return 0;
}
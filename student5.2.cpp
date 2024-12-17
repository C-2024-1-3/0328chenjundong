#include <iostream>
#include "student.h"           //不要漏写此行，否则编译通不过

void Student::display()         // 在类外定义 display 类函数
{
    std::cout << "num: " << num << std::endl;
    std::cout << "name: " << name << std::endl;
    std::cout << "sex: " << sex << std::endl;
}

void Student::set_value(int n, const char* nme, char s) // 定义 set_value 函数
{
    num = n;
    strncpy_s(name, sizeof(name), nme, _TRUNCATE);
    sex = s;
}

#include <iostream>
#include "student.h"            // 将类声明头文件包含进来

int main()
{
    Student stud;                // 定义对象
    stud.set_value(007, "tcg", 'm'); 
    stud.display();             //执行stud对象的display函数

    return 0;
}
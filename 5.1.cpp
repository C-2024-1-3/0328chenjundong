#include<iostream>
using namespace std;

class Time {  // 定义 Time 类
private:      // 数据成员为私有的
    int hour;
    int minute;
    int sec;

public:
    // 成员函数：输入时间
    void inputTime() {
        cout << "Enter hour: ";
        cin >> hour;
        cout << "Enter minute: ";
        cin >> minute;
        cout << "Enter second: ";
        cin >> sec;
    }

    // 成员函数：输出时间
    void displayTime() {
        cout << hour << ":" << minute << ":" << sec << endl;
    }
};

int main() {
    Time t1; // 定义 t1 为 Time 类对象
    t1.inputTime();  // 调用成员函数输入时间
    t1.displayTime(); // 调用成员函数输出时间
    return 0;
}


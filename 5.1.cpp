#include<iostream>
using namespace std;

class Time {  // ���� Time ��
private:      // ���ݳ�ԱΪ˽�е�
    int hour;
    int minute;
    int sec;

public:
    // ��Ա����������ʱ��
    void inputTime() {
        cout << "Enter hour: ";
        cin >> hour;
        cout << "Enter minute: ";
        cin >> minute;
        cout << "Enter second: ";
        cin >> sec;
    }

    // ��Ա���������ʱ��
    void displayTime() {
        cout << hour << ":" << minute << ":" << sec << endl;
    }
};

int main() {
    Time t1; // ���� t1 Ϊ Time �����
    t1.inputTime();  // ���ó�Ա��������ʱ��
    t1.displayTime(); // ���ó�Ա�������ʱ��
    return 0;
}


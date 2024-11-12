#include <iostream>
using namespace std;

int main() {
    double a,b;
    char op;
    cin>>a>>op>>b;
    switch (op) {
        case '+':
            cout <<"="<<a+b<<endl;
            break;
        case '-':
            cout <<"="<<a-b<<endl;
            break;
        case '*':
            cout <<"="<<a*b<<endl;
            break;
        case '/':
            if(b!=0){
                cout<<"="<<a/b<<endl;
            } else {
                cout<<"除数不能为0"<<endl;
            }
            break;
        case '%':
            if (static_cast<int>(b)!=0){
                cout <<"="<<static_cast<int>(a)%static_cast<int>(b)<<endl;
            } else {
                cout <<"除数不能为0"<<endl;
            }
            break;
        default:
            cout<<"运算符非法"<<endl;
    }
    return 0;
}


#include <iostream>
using namespace std;
int main() {
    int a,b;
    cin>>a>>b;
    if (a<=0||b<=0){
        cout << "��Ҫ����������" << endl;
    }else{
        int m=1;
        int minNum=(a<b)?a:b;
        for (int i = 1; i <= minNum; i++) {
            if (a%i==0&&b%i==0){
                m=i;
            }
        }
        int n=(a>b)?a:b;
        while (1){
            if (n%a==0&&n%b==0){
                break;
            }
            n++;
        }
        cout << "���������" <<m<<endl;
        cout << "��С��������" <<n<<endl;
    }
    return 0;
}

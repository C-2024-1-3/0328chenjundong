#include<iostream>
using namespace std;
int main(){
	double a,b,c;
	cin>>a>>b>>c;
	if(a+b>c&&a+c>b&&b+c>a){
		if(a==b||b==c||a==c){
			cout<<"���������ǵ���������"<<endl;
			cout<<"�ܳ�Ϊ"<<a+b+c; 
		}
		else{
		cout<<"�������β��ǵ���������"<<endl;
		cout<<"�ܳ�Ϊ"<<a+b+c; 
	}
	}
	else cout<<"������������";
} 

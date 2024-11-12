#include<iostream>
using namespace std;
int main(){
	double a,b,c;
	cin>>a>>b>>c;
	if(a+b>c&&a+c>b&&b+c>a){
		if(a==b||b==c||a==c){
			cout<<"该三角形是等腰三角形"<<endl;
			cout<<"周长为"<<a+b+c; 
		}
		else{
		cout<<"该三角形不是等腰三角形"<<endl;
		cout<<"周长为"<<a+b+c; 
	}
	}
	else cout<<"不构成三角形";
} 

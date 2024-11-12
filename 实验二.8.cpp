#include<iostream>
#include<cmath>
using namespace std;
int main(){
	double a,x1,x;
	cin>>a;
	if(a<0) cout<<"a不能为负数";
	else if(a==0) cout<<a;
	else{
	x1=a;
	do{
		x=x1;
		x1=(x+a/x)/2;
	}while(fabs(x1-x)>=1e-10);
	cout<<x1;
}
}

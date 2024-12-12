#include<iostream>
using namespace std;
int gcd(int a,int b){
	while(b!=0){
		int r=b;
		b=a%b;
		a=r;
	}
	return a;
}
void lcm(int a,int b,int& result){
	int gcd_value=gcd(a,b);
	result=(a*b)/gcd_value;
}
int main(){
	int m,n;
	cin>>m>>n;
	cout<<gcd(m,n)<<endl;
	int lcm1;
	lcm(m,n,lcm1);
	cout<<lcm1;
	return 0;
}

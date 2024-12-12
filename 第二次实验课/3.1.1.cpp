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
int main(){
	int m,n;
	cin>>m>>n;
	cout<<gcd(m,n);
	return 0;
}

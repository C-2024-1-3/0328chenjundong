#include<iostream>
using namespace std;
int main(){
	double v,r,h;
	const double PI=3.14159; 
	cin>>r>>h;
	v=PI*r*r*h;
	v=v/3;
	cout<<v;
}

#include<iostream>
#include<iomanip> 
using namespace std;
bool is_prime(int num){
	if(num<=1) return false;
	for (int i=2;i*i<=num;++i){
		if(num%i==0){
			return false;
		}
	}
	return true;
}
int main(){
	int count=0;
	int num=2;
	const int total=200;
	const int each_line=10;
	while(count<total){
		if(is_prime(num)){
			cout<<setw(6)<<num;
			count++;
			if(count%each_line==0)
			cout<<endl;
		}
		num++;
	}
	return 0;
}

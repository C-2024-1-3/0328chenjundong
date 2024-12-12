#include<iostream>
using namespace std;
int count(int day){
	if(day==10){
		return 1;
	} 
	else{
		return 2*count(day+1)+2;
	}
}
int main(){
	int m=count(1);
	cout<<m<<endl;
	return 0;
}

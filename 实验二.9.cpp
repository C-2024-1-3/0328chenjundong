#include<iostream>
using namespace std;
int main(){
	double i=1,sum=0,j=0;
	do{
		i=i*2;
		sum=sum+i;
		j++;
	}while(sum<=100);
	sum=sum-i;
	j--;
	double average;
	average=sum*0.8/j;
	cout<<average;
	return 0;
}

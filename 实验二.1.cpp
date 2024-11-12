#include<iostream>
using namespace std;
int main(){
	char a;
	int m,k1,k2;
	cin>>a;
	k1=static_cast<int>(a);
	if(a>='a'&&a<='z'){
		k2=k1-32;
		cout<<static_cast<char>(k2);
	}
	else cout<<k1+1;
}

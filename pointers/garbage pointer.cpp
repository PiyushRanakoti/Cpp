#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
	int *p=0;
	cout<<"add of p : "<<&p<<endl;
	//cout<<"value at p: "<<*p<<endl;
	//cout<<"add of value at p : "<<p<<endl;
	
	int i=5;
	int *ptr =0;
	ptr =&i;
	

	cout<<&i<<endl;
	cout<<ptr<<endl;
	cout<<*ptr<<endl;
	return 0;
	
}


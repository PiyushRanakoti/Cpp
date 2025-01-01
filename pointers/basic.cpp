#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
	int num=5;
	cout<<num<<endl;
	
	// address operator: &
	
	cout<<"address of num : "<<&num<<endl;
	
	int *ptr = &num;
	
	cout<<"value at ptr is : "<<*ptr<<endl;
	cout<<"address at ptr is : "<<ptr<<endl;
	cout<<"address of address at ptr : "<<&ptr<<endl;
	
	double d =4.3;
	double *p2 = &d;
	
	cout<<"address is : "<<p2<<endl;
	cout<<"value is : "<<*p2<<endl;
	
	cout<<"value of integer "<<sizeof(num)<<endl;
	cout<<"size of ptr : "<<sizeof(ptr)<<endl;
	cout<<"size of double : "<<sizeof(d)<<endl;
	cout<<"size of double pointer :"<<sizeof(p2)<<endl;
	return 0;
	
}


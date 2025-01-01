#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
	int num=5;
	int*p = &num;
	int a = *p; // copy current value of *p at a
	a++;		//increment copy
	cout<<a<<endl;
	cout<<num<<endl;
	a=*p; 		//again orignal 5 value comes to p
	cout<<a<<endl;
	
	(*p)++; 	//original value changed
	cout<<a<<endl;
	
	cout<<*p<<endl;
	cout<<num<<endl;
	a=*p;
	cout<<a<<endl;
	
	int* q =p; 	//create a copy of p pointer
	
	cout<<p<<endl;
	
	cout<<q<<endl;
	cout<<*p<<endl;
	cout<<*q<<endl;
	
	(*q)--; 
	(*p)--;
	(*p++)++;
	cout<<*p<<endl;
	cout<<*q<<endl;
	cout<<num<<endl;
	
	return 0;
	
}


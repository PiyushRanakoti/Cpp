#include<iostream>
#include<bits/stdc++.h>
using namespace std;


void update(int**p){
//	p= p+1;		//does nothing
	
//	*p = *p+1; //changes value at ptr
	
	**p = **p + 1; // changes original value
	
	cout<<endl<<"inside : "<<**p<<endl;
}

int main(){
	int i=5;
	
	int* ptr = &i;
	
	int** ptr1 = &ptr; // double pointer
	
	cout<<"address of ptr1: "<< ptr1 <<endl; //address of pointer 
	cout<< &ptr1<<endl; // address of pointer to pointer
	cout<<ptr<<endl; // gives address of value
	
	cout<<&i<<endl; // gives address of i
	cout<<endl;
	cout<<"before : "<<endl;
	cout<<i<<endl;
	cout<<ptr<<endl;
	cout<<ptr1<<endl;
	
	update(ptr1);
	
		cout<<endl;
 
	cout<<"after : "<<endl;
	cout<<i<<endl;
	cout<<ptr<<endl;
	cout<<ptr1<<endl;
	
	return 0;
	
}


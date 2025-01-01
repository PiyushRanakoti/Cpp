#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
	int arr[10] = {2,5,36}; //create 40 byte location(int =4 total 10)
	
	//arr points to first location of this array(gives address);
	
	cout<<"address of first memory block : "<<arr<<endl; //add of first lcoation
	cout<<"value at arr[0] : "<<arr[0]<<endl; 			//value at first location
	cout<<"address of first location : "<<&arr[0]<<endl;	//add of first location
	
	cout<<"address of next location : "<<&arr[0]+1<<endl;
	
	cout<<&arr<<endl; 	//gives address of first lcoation
	cout<<&arr+2<<endl;	//gives address of lcoaton after 2 block
	cout<< (&arr+2)<<endl;

	cout<<*arr<<endl;		//value at arr address
	cout<<*arr +1<<endl;	//value at first lcoation +1
	
	cout<<1[arr]<<endl; //gives value at 2nd lcaotion as it is read as *(i+arr) == *(arr+i) == arr[i]
	
	cout<<*(arr+1)<<endl; 	//value at next of first location
	
	
	
	return 0;
	
}


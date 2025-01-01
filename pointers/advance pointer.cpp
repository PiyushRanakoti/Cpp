#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int test(int arr[]){
	cout<<sizeof(arr)<<endl;
	return 0;
}

int main(){
	int arr[10]={1,2,3,4,5,6,7,8,9,10};
	
	test(arr); //here pointer to array is passed so only the size of pointer to address will print
	
	cout<<sizeof(arr)<<endl; // here whole array is passed so total size of array will display
	int* ptr = &arr[0];
	
	cout<<sizeof(ptr)<<endl;
	
	cout<<sizeof(&ptr)<<endl;
	
	cout<<ptr<<endl;		//1
	cout<<*(&ptr)<<endl;	//1
	cout<<*(ptr)<<endl;		//2
	cout<<&ptr<<endl;		//3
	
	cout<<arr<<endl; 		//1
	cout<<arr[0]<<endl;		//2
	cout<<&arr[0]<<endl;	//1
	
	*ptr += 1; //changes value at ptr
	ptr+=1; 	// moves to next address
	
	//you cant reassign array to new address 
	
	cout<<*ptr<<endl;		//moves to next block

	char ch[6]= "abcde"; // size 6 because last will be null char
	
	cout<<ch<<endl;
	
	char *c = &ch[0];
	cout<<c<<endl;

	char z = 'z';
	char *p = &z;
	
	cout<<p<<endl; 		//prints char z untill found null char
	cout<< static_cast<void*>(&z)<<endl; // prints z ka address
	
	return 0;
	
}


#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int getSum(int *arr,int n){
	int sum=0;
	
	for(int i =0;i<n;i++){
		sum += arr[i];
	}
	return sum;
}

int main(){
	
	int i ; 			// stack memory
	int * ptr = new int; // memory created in heap memory
	
	// iss heap memory ko total 12 byte lage = 4 byte ka int aur 8 byte ka pointer
	
	cout<<sizeof(ptr)<<endl;
	cout<<sizeof(*ptr)<<endl;
	cout<<sizeof(i)<<endl;
	
	// heap me array create karlo
	
	int n;
	cin>>n;
	int * arr = new int[n]; // dynamic variable size ka runtime me array heap me bana diya
	
	for(int i =0 ; i<n ;i++){
		cin>>arr[i];
	}
	
	int ans = getSum(arr,n);
	
	cout<<"sum : "<<ans<<endl;
	
	/*
	 differnce between dynamic and static allcoation
	
	int arr[50] ===> takes 200 memory from stack memeory  // staic allocation
	
	
	//dynamic allocation;
	int * arr = new int[50] 	====> takes 200 memory from heap and 8 byte from stack total = 208
	
	
	while(1){
	int i = 1; 		== > takes 4 byte of stack memory at each instant and free it when while loop ends so program dont crash
	}
	
	while(1){
	int * ptr = new int  	===> takes memory from heap but doesnt freee it causing program to crash(stack wala pointer free hojeyaga)
	
	so staic allocation me memory free hojati hai but dyanmic ko free karna padta hai manualllly
	
	using delete keyword
	=> delete arr;
	
	
	
	*/
	
	
	return 0;
	
}


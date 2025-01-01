#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void print(int *p){
	cout<<*p<<endl;
}

void update(int *p ){
	
	*p+= 1;
	
	cout<<"inside : "<<*p<<endl;
}

int getsum(int arr[],int n){ //pointer arr is passed to fucntion so int arr[] = int *arr same hai
	int sum=0;
	
	cout<<"size : "<<sizeof(arr)<<endl; //since arr is a adress therfore this prints 8 size of address
	
	
	for(int i=0;i<n+5;i++){ 
		sum+= arr[i];
		cout<<arr[i]<<endl;
	}
	
	return sum;
}


int main(){
	
	int value = 5;
	int* p = &value;

	cout<<"before : "<<endl;
	print(p);
	
	update(p);

	cout<<"after : "<<endl;
	print(p);


	int arr[5] = {1,2,3,4,5};
	
	cout<<"sum is :"<< getsum(arr+3,5)<<endl; // given pinter to fourth addres of arr
	return 0;
	
}


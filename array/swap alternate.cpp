#include<iostream>
using namespace std;

void print(int arr[],int size){
	for(int i = 0 ; i< size; i++){
		cout << arr[i] << " ";
	}
	cout<<endl;
}

void swap_alternate(int arr[],int size){
	for(int i = 0 ; i< size-1; i+=2){	
		if(i < size+1)
			swap(arr[i],arr[i+1]);
	
	}
}
int main(){
	int arr[6] = {1,2,3,4,5,6};
	int arr2[5] = {10,11,12,13,14};
	
	swap_alternate(arr,6);
	print(arr,6);

	swap_alternate(arr2,5);
	print(arr2,5);
	return 0;
	
}


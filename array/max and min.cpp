#include<iostream>
using namespace std;


void print(int arr[],int size){
	for(int i = 0 ; i< size; i++){
		cout << arr[i] << " ";
	}
	cout<<endl;
}

int getmax(int arr[],int size){
	int max = INT_MIN;
	for(int i = 0 ; i< size; i++){
		if(arr[i] > max)
			max = arr[i];
	}
	
	return max;
}

int getmin(int arr[],int size){
	int mini = INT_MAX;
	for(int i = 0 ; i< size; i++){
		mini = min(mini,arr[i]);
	}
	
	return mini;
}

int main(){

 	int arr[5]= {3,4,15,2,8};
 	
 	cout << getmax(arr,5)<<endl;
 	
 	cout << getmin(arr,5);

	return 0;
	
}


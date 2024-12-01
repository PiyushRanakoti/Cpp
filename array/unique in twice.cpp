#include<iostream>
using namespace std;

int unique_in_twice(int arr[],int size){
	int ans =0;
	for(int i = 0;i<size;i++){
		ans = ans^arr[i];
	}
	
	return ans;
	
}
int main(){
	int arr[] = {1,2,3,4,1,2,4,6,3};
	
	
	cout<<"unique element in given array : "<< unique_in_twice(arr,9);
	return 0;
	
}


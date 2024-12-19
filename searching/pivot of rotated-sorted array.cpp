#include<iostream>
using namespace std;

int getpivot(int arr[],int size){
	int s=0;
	int e = size-1;
	int mid = s +(e-s)/2;
	
	while(s<e){
		if(arr[mid] >= arr[0]){
				s = mid+1;
		}
		else if(arr[mid]< arr[mid+1]){
			e = mid;
		}
		
		mid = s +(e-s)/2;
	}
	return s;
}

int main(){
	int arr[] = {2,3,4,5,1};
	
	cout<< "pivot element : "<<getpivot(arr,5);
	return 0;
	
}


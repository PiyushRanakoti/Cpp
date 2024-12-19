#include<iostream>
using namespace std;

int firstocc(int arr[], int size,int key){
	int start =0;
	int end = size-1;
	int mid =	start + (end-start)/2;
	int ans;
	while(start<= end){
		if(arr[mid]==key){
		
			ans = mid;	
			end = mid-1;
	}
		else if(key< arr[mid])
			end = mid-1;
		else
			start = mid+1;
		
		mid = (end-start)/2 + start;
	}
	
	return ans;
}


int lastocc(int arr[], int size,int key){
	int start =0;
	int end = size-1;
	int mid =	start + (end-start)/2;
	int ans;
	while(start<= end){
		if(arr[mid]==key){
		
			ans = mid;	
			start = mid+1;;
	}
		else if(key< arr[mid])
			end = mid-1;
		else
			start = mid+1;
		
		mid = (end-start)/2 + start;
	}
	
	return ans;
}

int firstandlastocc(int arr[],int size,int key){
	cout<< "first occurence : "<<firstocc(arr,size,key)<<endl;
	cout<< "last occurence : "<<lastocc(arr,size,key)<<endl;
	
}

int main(){
	int arr[] = {1,2,3,4,4,4,5,6};
	
	firstandlastocc(arr,8,3);
	return 0;
	
}


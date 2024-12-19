#include<iostream>
using namespace std;

int binarysearch(int arr[], int size,int key){
	int start =0;
	int end = size-1;
	int mid =	start + (end-start)/2;
	
	while(start<= end){
		if(arr[mid]==key)
			return mid;
		else if(key< arr[mid])
			end = mid-1;
		else
			start = mid+1;
		
		mid = (end-start)/2 + start;
	}
	
	return -1;
}

int main(){
	int even[] = {2,4,6,8,10,12};
	int odd[] = {1,3,5,7,9,};
	
	int index = binarysearch(even,6,12);
	cout<< "index of 12 in even : "<< index<<endl;
	
	 index = binarysearch(even,6,8);
	cout<< "index of 8 in even : "<< index<<endl;
	
	index = binarysearch(odd,5,12);
	cout<< "index of 12 in odd : "<< index<<endl;
	
	 index = binarysearch(odd,5,7);
	cout<< "index of 12 in even : "<< index<<endl;
	return 0;
	
}


#include<iostream>
#include<stdlib.h>
using namespace std;


//display the array of numbers
void display(int a[],int size){
	for(int i =0;i < size;i++){
		cout<< a[i] <<" ";
	}
	cout<<endl;
}

//merges and sorts array
void merge(int arr[],int l,int m ,int r){

	int n1 = m-l+1 , n2 = r-m;
	int left[n1],right[n2];

	for(int i= 0;i<n1;i++)
		left[i] = arr[l+i];

	for(int j= 0;j<n1;j++)
		right[j] = arr[m+1+j];
		
	int i=0,j=0,k=l;

	while(i<n1 && j < n2){
		if(left[i] >= right[j])
			arr[k] = left[i++];
		else 
			arr[k]= right[j++];
		k++;
	}
	while(i<n1)
		arr[k++]= left[i++];
	while(j<n1)
		arr[k++]= right[j++];
		
}

//divdes array into smaller unsorted subarray
void mergesort(int arr[],int l , int r){
	if(l<r){
		int mid = l + (r-l)/2;

		mergesort(arr,l,mid);
		mergesort(arr,mid+1,r);
		merge(arr,l,mid,r);
	} 
}

int main(){
	int arr[]= {2,7,2,6,4,8,9};
	int size = sizeof(arr)/sizeof(int);
	display(arr,size);  // 2 7 2 6 4 8 9 


	mergesort(arr,0,size-1);

	display(arr,size); //9 8 7 6 4 2 2 
	return 0 ;
}

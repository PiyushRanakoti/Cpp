#include<iostream>
#include<vector>
using namespace std;

void printArray(vector<int>arr,int n){
	for(int i =0;i<n;i++){
		cout<< arr[i]<<' ';
	}
	cout<<endl;
}

void insertionSort(vector<int>&arr,int n){
	for(int i =1;i<n;i++){
		int temp =arr[i];
		int j;
		for(j=i-1;j>=0;j--){
			if(arr[j]<temp)
				arr[j+1] = arr[j];
			else{
				break;
			}	
		}
		
		arr[j+1] = temp;
	}
}

int main(){
	vector<int>arr={4,10,11,20,5,8};
	int size = arr.size();
	cout<<"original : "<<endl;
	printArray(arr,size);
	insertionSort(arr,size);
	
	cout<<"sorted : "<<endl;
	printArray(arr,size);
	return 0;
	
}


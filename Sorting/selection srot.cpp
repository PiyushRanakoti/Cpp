#include<iostream>
#include<vector>
using namespace std;

void printArray(vector<int>arr,int n){
	for(int i =0;i<n;i++){
		cout<< arr[i]<<' ';
	}
	cout<<endl;
}

void bubbleSort(vector<int>&arr,int n){
	for(int i =0; i<n;i++){
		for(int j = 0;j<n-i-1;j++){
			if(arr[j]< arr[j+1])
				swap(arr[j],arr[j+1]);
		}
	}
}

int main(){
	vector<int>arr={2,4,3,1,6,8};
	int size = arr.size();
	cout<<"original : "<<endl;
	printArray(arr,size);
	bubbleSort(arr,size);
	
	cout<<"sorted : "<<endl;
	printArray(arr,size);
	return 0;
	
}


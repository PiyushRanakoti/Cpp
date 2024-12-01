#include<iostream>
using namespace std;

void print(int arr[],int size){
	for(int i = 0 ; i< size; i++){
		cout << arr[i] << " ";
	}
	cout<<endl;
}

int ans(int arr[],int size){
	int sum = 0;
	for(int i = 0 ; i< size; i++){
		sum += arr[i];
	}
	
	return sum;
	cout<<endl;
}


void input(int arr[],int size){
	for(int i =0 ; i < size; i++){
		int n =0  ;
		cout<< "enter "<< i+1<<" element : ";
		cin >> n;
		arr[i]  = n;
	}
}
int main(){
	cout<< "enter array size : ";
	
	int size ;
	
	cin >> size;
	
	int num[size];
	
	input(num,size);
	
	print(num,size);
	
	
	cout << "sum of above array : " << ans(num,size);
	return 0;
	
}


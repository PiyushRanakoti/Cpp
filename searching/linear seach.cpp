#include<iostream>
using namespace std;


bool search(int arr[],int size,int key){
	for(int i =0 ; i<size;i++){
		if(arr[i] == key)
			return true;
	}
	return false;
}
int main(){
	int arr[5] = {1,24,5,3,4};
	
	cout << " enter key : ";
	int key;
	cin>> key;
	
	bool found = search(arr,5,key);
	
	cout << ((found)?"True":"False");
	return 0;
	
}


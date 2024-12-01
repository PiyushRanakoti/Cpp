#include<iostream>
using namespace std;

int main(){
	int arr[]= {1,2,3,4,2,5,6};
	int ans = 0;
	for(int i= 0; i< sizeof(arr)/sizeof(int); i++){
		ans = ans^arr[i];
		ans = ans^i;
			
	}
	
	cout<<"unique element : "<< ans;
	
	return 0;
}

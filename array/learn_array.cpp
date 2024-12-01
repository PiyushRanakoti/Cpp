#include<iostream>
using namespace std;


//funtion that print out an array

void print(int arr[],int size){
	for(int i = 0 ; i< size; i++){
		cout << arr[i] << " ";
	}
	cout<<endl;
}


int main(){
	//array declartion
	int one[10];


	//fill array with -2
	fill(one,one+10,-2);
	print(one,5);
	
	int two[5]={1,2}; // first two : 1 2 rest are set to 0

	print(two,5);
	
	return 0;
	
}


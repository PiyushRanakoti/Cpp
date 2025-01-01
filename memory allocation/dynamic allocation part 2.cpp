#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
		
	/*
	
		- - - - -
		- - - - -
		- - - - - ===> int arr[5][5] static allocation in stack memory 
		- - - - -
		- - - - -
	
	 */
	 
	 
	// runtime me dyanmic 2d array ka allocation
	int m,n;
	cout<<"enter row and column : "<<endl;
	cin>>m>>n;
	
	int ** arr = new int*[m]; // array bana liya int* type ka (array of pointers ab har pointer pe ek array laga do)
	
	for(int i =0;i<m;i++){
		arr[i]  = new int[n]; // mXn ka 2d array heap me bana diya
	}
	
	for(int i =0; i<m;i++){
		for(int j =0;j<n;j++){
			cin >> arr[i][j];		// input leliya
		}
	}
	
	for(int i =0; i<m;i++){
		for(int j =0;j<n;j++){
			cout<< arr[i][j]<<' ';		// output
		}
		cout<<endl;
	}
	
	
	// ab freee karne ke liye phele rows free karo(m) fir n 
	// phele n kardiya toh row wali memory leak hojaeygi
	
	
	for(int i=0;i<m;i++){
		delete[] arr[i];		// row free hogye
	}
	
	delete []arr;				// sari memory freee KHATAM!!!!!
	

	return 0;
	
}


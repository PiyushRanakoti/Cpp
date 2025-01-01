#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
	int row;
	cout<<"row : ";
	cin>>row;
	
	int ** arr = new int*[row];
	
	int size[row];
	cout<<"enter size of rows : ";
	for(int i =0;i<row;i++){
		cin>> size[i];
	}
	
	for(int i =0;i<row;i++){
		arr[i] = new int[ size[i] ];
	}
	
	for(int i =0;i<row;i++){
		int col = size[i];
		for(int j =0;j<col;j++){
			arr[i][j] = j;
		}
	}
	
	for(int i =0;i<row;i++){
		int col = size[i];
		
		for(int j =0;j<col;j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	
	
	return 0;
	
}


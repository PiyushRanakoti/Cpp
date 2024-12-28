#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main(){
	int arr[3][3] = {1,2,3,4,5,6,7,8,9};
	
	int row = sizeof(arr) / sizeof(arr[0]);
    int col = sizeof(arr[0]) / sizeof(arr[0][0]);
    
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<arr[i][j]<<' ';
		}
		cout<<endl;
	}
	
	int count = 0;
	int total = row*col;
	
	int sRow = 0,eRow=row-1;
	int sCol =0,eCol =col-1;
	
	while(count < total){
		for(int i =sCol;i<=eCol;i++){
			cout<<arr[sRow][i]<<" "; 
			count++;
		}
		sRow++;
		
		for(int i= sRow;i<=eRow;i++){
			cout<<arr[i][eCol]<<" ";
			count++;

		}
		eCol--;
		
		for(int i =eCol;i>=sCol;i--){
			cout<<arr[eRow][i]<<" ";
			count++;

		}
		eRow--;
		
	for(int i =eRow;i>=sRow;i--){
			cout<<arr[i][sCol]<<" ";
			count++;

		}
		sCol++;
	}
	
	return 0;
	
}


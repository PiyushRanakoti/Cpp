#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool search2dMat(vector<vector<int>>&mat,int target){
	int row = mat.size();
	int col = mat[0].size();
	
	int rowindex = 0;
	int colindex = col-1;
	
	while(rowindex < row && colindex >= 0){
		
		int element = mat[rowindex][colindex];
		
		if(element == target)	
			return true;
		else if(element< target)
			rowindex++;
		else
			colindex--;
			
	}
	return false;
	
}

int main(){
	vector<vector<int>>arr={{1,4,7,11,15},{2,5,8,12,19},{3,6,9,16,22},{10,13,14,17,24},{18,21,23,26,30}};
	
	//row are sorted and col are sorted
	int row = arr.size();
	int col = arr[0].size();
	
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			cout<<arr[i][j]<<' ';
		}
		cout<<endl;
	}
	int target ;
	cout<<"enter target : ";
	cin>>target;
	

	if(search2dMat(arr,target)){
		cout<<"found"<<endl;
	}
	else
		cout<<"not found"<<endl;
	
	return 0;
	
}


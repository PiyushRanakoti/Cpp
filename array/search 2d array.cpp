#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool search2dMat(vector<vector<int>>&mat,int target){
	int row = mat.size();
	int col = mat[0].size();
	
	int s =0;
	int e = row*col-1;
	int mid = s+(e-s)/2;
	
	while(s<e){
		int element = mat[mid/col][mid%col];
		
		if(element == target)
			return true;
		else if(element < target)
			s = mid+1;
		else
			e = mid-1;
			
		mid = s+(e-s)/2;
	}
	return false;
}
int main(){
	
	vector<vector<int>>arr = {{1,2,3},{5,7,10},{14,25,67}};
	int target ;
	cout<<"enter target : ";
	cin>>target;
	
	if(search2dMat(arr,target))
		cout<<"found";
	else
		cout<<"not found";
	

	return 0;
	
}


#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool present(int arr[][4],int target,int col,int row){
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			if(arr[i][j] == target)
				return true;
		}
		
	}
	return false;
}

int rowSum(int arr[][4],int col,int row){
	cout<<"printing row sum : "<<endl;
	for(int i=0;i<row;i++){
		int sum=0;
		for(int j=0;j<col;j++){
			sum+= arr[i][j];
		}
		cout<<"sum of "<<i<<" row : "<<sum<<endl;
	}
}


int LargestrowSum(int arr[][4],int col,int row){
	int maxiRow = INT_MIN;
	int maxi=-1; 
	for(int i=0;i<row;i++){

		int sum=0;
		for(int j=0;j<col;j++){
			sum+= arr[i][j];
		}
		if(sum>maxi){
			maxi =sum;
			maxiRow = i;
		}	
	}
	cout<<"max row sum = "<<maxi<<" at row "<<maxiRow<<endl;

}

int colSum(int arr[][4],int col,int row){
	cout<<"printing col sum : "<<endl;
	for(int i=0;i<col;i++){
		
		int sum=0;
		for(int j=0;j<row;j++){
			sum+= arr[j][i];
		}
		cout<<"sum of "<<i<<" col : "<<sum<<endl;
	}
}

int main(){
	int arr[3][4];
	for(int i=0;i<3;i++){
		for(int j=0;j<4;j++){
		//	cin>>arr[i][j];
		}
	}
	
	int arr1[3][4] = {1,2,3,4,8,9,10,11,12,5,6,7,};
	//print 2d array
	for(int i=0;i<3;i++){
		for(int j=0;j<4;j++){
			cout<<arr1[i][j]<<' ';
		}
		cout<<endl;
	}
	
	cout<<"enter target : ";
	int target ;
	cin>>target;
	
	if(present(arr1,target,3,4))
		cout<<"present"<<endl;
	else
		cout<<"not present"<<endl;
		
	rowSum(arr1,4,3);
	colSum(arr1,4,3);
	LargestrowSum(arr1,4,3);
	
	return 0;
	
}


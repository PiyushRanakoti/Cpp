#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
	int wave[3][3] = {{1,4,7},{2,5,8},{3,6,9}};
	
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<wave[i][j]<<' ';
		}
		cout<<endl;
	}
	cout<<"wave : "<<endl;
	
	for(int col=0;col<3;col++){
		if(col&1){
			for(int row = 2;row>=0;row--){
				cout<<wave[row][col]<<" ";
			}
		}
		else{
			for(int row = 0;row<3;row++){
				cout<<wave[row][col]<<" ";
			}
		}
	}
	return 0;
	
}


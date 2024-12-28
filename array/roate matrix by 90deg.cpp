#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void transpose(vector<vector<int>>& matrix){
        int row = matrix.size();
        int col = matrix[0].size();

        for(int i=0;i<row;i++){
            for(int j=i+1;j<col;j++){
                    swap(matrix[i][j],matrix[j][i]);
        }
    }
}

    void reverse(vector<vector<int>>& matrix){

        int row = matrix.size();
        for(int i=0;i<row;i++){
            int left=0;
            int right= row-1;

            while(left<=right){
                swap(matrix[i][left],matrix[i][right]);
                left++;right--;
        }
        }
    }
    void rotate(vector<vector<int>>& matrix) {
        transpose(matrix);
        reverse(matrix);
    }

int main(){

	return 0;
	
}


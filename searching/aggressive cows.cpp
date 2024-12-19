#include<iostream>
#include<algorithm>
#include<vector>
#include <bits/stdc++.h>
using namespace std;

bool isPossible(vector<int>arr,int k, int mid){
	int cow=1;
	int lastpos=arr[0];
	for(int i =0; i< arr.size();i++){
		if( arr[i]-lastpos >= mid){
			cow++;
			lastpos = arr[i];
			if(cow==k)
				return true;
	}
}
	return false;
}

int aggressiveCows(vector<int>arr,int k){
	sort(arr.begin(),arr.end());
	
	int s=0;
	int e = arr[arr.size()-1];
	
	int mid = s+(e-s)/2;
	int ans= -1;
	while(s<=e){
		if(isPossible(arr,k,mid)){
			ans = mid;
			s = mid+1;
		}
		else
			e= mid-1;
			
		mid = s+(e-s)/2;
	}
	
	
	return ans;
	
}

int main(){
	int arr[] = {};
	vector<int>stalls= {4,2,1,3,6};
	int cows =2;
	
	cout<< "maximum of minimum distance between aggresive cows is : "<< aggressiveCows(stalls,cows)<<endl;
	return 0;
	
}


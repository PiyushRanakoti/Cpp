#include<iostream>
#include<vector>
using namespace std;

bool fenceToPainter(vector<int> arr, int n , int m, int mid){
	
	int painter =1;
	int fence=0;
	
	for(int i=0;i<n;i++){
		if(fence + arr[i] <= mid){
			fence += arr[i];
		}
		else{
			painter++;
			if(painter > m || arr[i] > mid)
				return false;
			fence = arr[i];
		}
		
	}
	
	return true;
}

int painterPartition(vector<int>arr, int n , int m){
	int s=0;
	int sum=0;
	for(int i=0;i<n;i++){
		sum+= arr[i];
	}
	
	int e =sum;
	int ans =-1;
	int mid = s+(e-s)/2;

	while(s<=e){
		
		
		if(fenceToPainter(arr,n,m,mid)){
			ans = mid;
			e =mid-1;
		}
		else{
			s = mid+1;
		}
		 mid = s+(e-s)/2;
		
	}
	return ans;
}

int main(){
	vector<int>fence ;
	fence.push_back(5);
	fence.push_back(5);
	fence.push_back(5);
	fence.push_back(5); //book = 10 20 30 40
	int painter = 2;
	int n = fence.size();
	
	cout<< "maximum fence one painter can paint to complete work in minimum time: "<< painterPartition(fence,n,painter)<<endl;
	// ans = 60
	return 0;
	
}


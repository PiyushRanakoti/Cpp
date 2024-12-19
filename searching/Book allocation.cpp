#include<iostream>
#include<vector>
using namespace std;

bool isPossible(vector<int> arr, int n , int m, int mid){
	
	int student =1;
	int pagesum=0;
	
	for(int i=0;i<n;i++){
		if(pagesum + arr[i] <= mid){
			pagesum += arr[i];
		}
		else{
			student++;
			if(student > m || arr[i] > mid)
				return false;
			pagesum = arr[i];
		}
		
	}
	
	return true;
}

int allocateBooks(vector<int>arr, int n , int m){
	int s=0;
	int sum=0;
	for(int i=0;i<n;i++){
		sum+= arr[i];
	}
	
	int e =sum;
	int ans =-1;
	int mid = s+(e-s)/2;

	while(s<=e){
		
		
		if(isPossible(arr,n,m,mid)){
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
	vector<int>book ;
	book.push_back(10);
	book.push_back(20);
	book.push_back(30);
	book.push_back(40); //book = 10 20 30 40
	int student = 2;
	int n = book.size();
	
	cout<< "minimum of maximum number of pages allocated to a student is: "<< allocateBooks(book,n,student)<<endl;
	// ans = 60
	return 0;
	
}


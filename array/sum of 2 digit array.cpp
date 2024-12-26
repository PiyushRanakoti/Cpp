#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
	vector<int> a = {1,2,3};
	vector<int> b= {4,5};
	
	vector<int> ans ;
	
	int carry =0;
	
	int i = a.size()-1, j = b.size()-1;
	while(i>=0 && j>=0){
		
		int sum = a[i] + b[j] + carry;
		
		carry = sum/10;
		sum = sum%10;
		
		ans.push_back(sum);
		i--;j--;
	}
	
	while(i>=0){
		int sum = a[i]+carry;
		carry = sum/10;
		sum  = sum%10;
		ans.push_back(sum);
		i--;
	}
	

	
	while(carry!=0){
		int sum = carry;
		carry = sum/10;
		
		ans.push_back(sum);
	}
	
	reverse(ans.begin(),ans.end());
	
	
	for(int i=0;i<ans.size();i++){
		cout<<ans[i];
	}
		
	
	return 0;
	
}


#include<iostream>
#include<bits/stdc++.h>
using namespace std;

vector<int> merge_sorted_array(vector<int>&v1, vector<int>&v2){
	
	vector<int>v;
	int p1 =0;
	int p2 =0;
	
	while(p1 < v1.size() && p2 < v2.size()){
		if(v1[p1] <= v2[p2]){
			v.push_back(v1[p1]);
			p1++;
		}
		else{
			v.push_back(v2[p2]);
			p2++;
		}	
	}
	
	while(p1 < v1.size()){
		v.push_back(v1[p1]);
		p1++;
	}
	
	while(p2< v2.size()){
		v.push_back(v2[p2]);
		p2++;
	}
	
	return v;
}

int main(){
	vector<int>v1 = {1,3,5,6,7,7};
	
	vector<int>v2= {2,3,4,5,6};
	
	cout<<"v1 : "<<endl;
	for(auto i : v1)
		cout<<i<<" ";
	cout<<endl;
	
	cout<<"v2: "<<endl;
	for(auto i : v2)
		cout<<i<<" ";
	cout<<endl;
	
	vector<int>v3 = merge_sorted_array(v1,v2);
	
	cout<<"meeged sorted array : "<<endl;
	for(auto i : v3)
		cout<<i<<" ";
	cout<<endl;
	
	
	
	return 0;
	
}

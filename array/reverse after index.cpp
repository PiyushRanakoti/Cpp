#include<iostream>
using namespace std;
#include<bits/stdc++.h>


void reverse_array(vector<int>&v,int index){
	
	int s = index;       
	
	int e =  v.size()-1;
	
	while(s<e){
		swap(v[s],v[e]);
		s++;
		e--;
	}
}

void print_array(vector<int>&v){
	
	for(auto i : v)
		cout<<i<<" ";
		
	cout<<endl;
}

int main(){
	
	vector<int> v = {1,2,3,4,5,6,7};
	cout<<"before: "<<endl;

	print_array(v);
	
	reverse_array(v,1);
	
	cout<<"after: " << endl;
	print_array(v);
	
	return 0;
	
}


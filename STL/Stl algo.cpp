#include<algorithm>
#include<iostream>
using namespace std;

int main(){
	
	vector<int> v = {1,2,3,4,5,5};
	
	cout<<binary_search(v.begin(),v.end(),5)<<endl; //bool whter element present or not
	
	cout<<"lower bound -> "<<lower_bound(v.begin(),v.end(),5)-v.begin()<<endl;
	cout<<"upper bound -> "<<upper_bound(v.begin(),v.end(),5)-v.begin()<<endl;
	
	int a=5,b=6;
	
	cout<<"max : "<<max(a,b)<<endl;
	
	cout<<"min : "<<min(a,b)<<endl;

	string s ="piyush";
	
	reverse(s.begin(),s.end());
	
	cout<<s<<endl;
	
	rotate(v.begin(),v.end()-2,v.end());
	
	for(auto i : v)
		cout<<i<<endl;
		
	sort(v.begin(),v.end()); // uses quick+heap+insertion sort
	cout<<"sorted vector : "<<endl;
		for(auto i : v)
		cout<<i<<endl;
	return 0;
	
}


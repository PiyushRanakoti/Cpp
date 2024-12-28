#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
	string s;
	cout<<"enter string : ";
	getline(cin,s);
	
	cout<<"\nenter replaceing string : ";
	
	string ch;
	cin>>ch;
	
	string ans;
	
	for(auto i:s){
		if(i==' ')
			ans+= ch;
		else
			ans+= i;
	}
	
	cout<<ans<<endl;
	return 0;
	
}


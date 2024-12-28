#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int getMaxOccCh(string s){
	int arr[26] ={0};
	int ans=0;
	for(int i=0 ;i< s.length();i++){
		char ch = s[i];
		
		if(ch>='a' && ch<='z'){
			int n= ch-'a';
			arr[n]++;
		}
	
		else if(ch>='A' && ch<='Z'){
			int n= ch-'A';
			arr[n]++;
		}
	}
	
	char a = ' ';
	
	for(auto i: arr)
		ans = max(i,ans);
	
	cout<<"max occuring char's: ";
	
	for( int i=0;i<26;i++){
		if(arr[i]==ans)
			cout<< char('a'+i)<<" ";
			
	}
	
	
	cout<<"\nno.of times : ";
	return ans;
}

int main(){
	string s;
	cout<<"enter string : ";
	
	cin>>s;
	cout<<getMaxOccCh(s)<<endl;
	return 0;
	
}


#include<iostream>
#include<bits/stdc++.h>
using namespace std;

char toLower(char ch){
	if(ch>='a'&&ch<='z'){
		return ch;
	}
	else{
		return ch-'A'+'a';
	}
}

int getLength(char name[]){
	int count=0;
	for(int i =0; name[i]!='\0';i++){
		count++;
		}
	return count;
	}

int main(){
	char name[10];
	
	
	cout<<"enter name : ";
	cin>>name;
	
	int s=0, e= getLength(name)-1;
	
	while(s<e &&()){
		if(toLower(name[s])!= toLower(name[e])){
			cout<<"not palindrome"<<endl;
			return 0;
		}
		s++;e--;
	}
	
	cout<<"palindrome"<<endl;
	return 0;
	
}


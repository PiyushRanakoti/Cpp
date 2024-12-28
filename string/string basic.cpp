#include<iostream>
using namespace std;

int main(){
	char name[10];
	
	cin>>name;
	
	int count=0;
	for(int i =0 ; name[i]!='\0';i++){
		count++;
	}	
	
	cout<<count;
	return 0;
	
}


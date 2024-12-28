#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool prime(int num){
	if(num<=1)
		return false;
	if(num==2)
		return true;
	for(int i =2;i< num;i++){
		if(num%i==0)
			return false;
	}
	
	return true;

}

int main(){
	
	cout<<"enter number : ";
	int num;
	cin>>num;

	if(prime(num))
		cout<<"prime ";
	else
		cout<<"not prime";
	
	return 0;
	
}


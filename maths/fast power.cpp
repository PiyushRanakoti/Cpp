#include<iostream>
#include<bits/stdc++.h>
using namespace std;

/* 
	we know  a%n --> [0...n-1] 
	
	a%m + b%m = (a+b)%m
	a%m - b%m = (a-b)%m
	
	a%m * b%m = (a*b)%m

	FAST POWER :
	a^b :
		(a^(b/2))^2 		for even b
		(a^(b/2))^2 *a 		for odd b
		
	time comp= O(b) for A^b


	
*/

int Modexpo(int a ,int b, int c){
	int res=1;
	
	while(b>0){
		if(b&1)
			res = (res* (a%c))%c;
		
		a = ((a%c)*(a%c))%c ;
		b= b>>1;
	}
	
	return res;
}
int main(){
	// input a,b,c and find modular exponent :  (a^b)%c
	
	int a,b,c;
	cout<<"enter a,b,c : "<<endl;
	cin>>a;cin>>b;cin>>c;
	
	cout<<Modexpo(a,b,c)<<endl;
	
	return 0;
	
}


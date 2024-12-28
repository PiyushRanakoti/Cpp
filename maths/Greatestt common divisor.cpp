#include<iostream>
#include<bits/stdc++.h>
using namespace std;


/** using euclid algo
	
	gcd(a,b) = gcd(a-b,b) = gcd(a % b,b) 
	
	also lcm(a,b)*gcd(a,b) = a*b 
	
	 **/


int gcd(int a,int b){
	if(a==0)
		return b;
	if(b==0)
		return a;
	
	while(a!=b){
		if(a>b){
			a=a-b;
		}
		else
			b=b-a;
	}
	return a;
}

int LCM(int a ,int b){
	return a*b/(gcd(a,b));
}
	
int main(){
	
	cout<<"enter number : ";
	int a,b;
	cin>>a;cin>>b;
	
	cout<<"gcd : "<<gcd(a,b)<<endl;
	cout<<"lcm : "<<LCM(a,b)<<endl;

	return 0;
	
}


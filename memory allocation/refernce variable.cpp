#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void update(int n){ // copy of value passed in fucntion

	cout<<&n<<endl; // differeent addresss than orignal value
	n++;
}


void update2(int& n){ // reference variable ==> same memory location 
	n++;
} 
int main(){
	int i =5;
	int &j = i; // reference variable same as i craeted using &;
	
	cout<<i<<endl;
	i++;
	cout<<i<<endl;
	j++;
	cout<<j<<endl;
	
	/* why we need this ?? 
	
	==> using this pass by refernce is used in function instead of copy of value to fucntion 
	
	*/
	
	
	int n =5;
	cout<<"before : "<<n<<endl;
	
	cout<<&n<<endl;
	update2(n);
	
	cout<<"after : "<<n<<endl;
	return 0;
	
}


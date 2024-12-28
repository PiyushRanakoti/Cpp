#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//phele sabko prime mark kardo fir jo jo staring se nuumber tak prime mil raha uski table wale num
//ko non prime mark karte raho;

//time complex = O(n*log(log n))


int countPrime(int n ){
	vector<bool>Prime(n+1,true);
	
	int count=0;
	Prime[0] = Prime[1] = false;
	
	for(int i=2;i<n;i++){
		if(Prime[i]){
			count++;
			
			for(int j =2*i;j<n;j+=i){
				Prime[j] = false;
			}	
		}	
	}
	return count;
}



int main(){
	
	cout<<"enter number : ";
	int num;
	cin>>num;	
	
	cout<<countPrime(num)<<endl;
	
	
	return 0;
	
}


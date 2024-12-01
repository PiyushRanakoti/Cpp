#include<iostream>
#include<vector>

using namespace std;



void display(int arr[],int n){
	for(int i =0; i < n; i++){
		
		cout<< arr[i]<< " ";
		
	}
	cout <<endl;
}

int main(){
	int a[] = {0,1,2,3,4,5,6,7};

	int b[] = {1,2,3,4,5,11};
	
	int n= sizeof(a)/sizeof(int);
	int m = sizeof(b)/sizeof(int);
	int o = min(n,m);
	int c[o] = {0};
	
	int i =0,j=0,k=0;
	
	while(i<n && j < m){
		if(a[i] == b[j]){
			c[k]= a[i];
			k++;
			j++;
			i++;
		}
		
		else if(a[i]< b[j]){
			i++;
		}
		
		else 
			j++;
	}
	display(a,n);
	display(b,m);
	display(c,k);
	
	return 0;
}

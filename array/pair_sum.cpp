#include<iostrea m>
#include<vector>
#include<string.h>
using namespace std;



void print(int arr[],int size){
	for(int i = 0 ; i< size; i++){
		cout << arr[i] << " ";
	}
	cout<<endl;
}

int main(){
	cout<<"enter a number for sum: "<<endl;
	int sum;
	cin>> sum;

		
	
	int arr[]={1,2,3,4,5,6,8,9};
	
	int size = sizeof(arr)/sizeof(int);
	int temp[2] = {0,0};
	for(int i=0; i< size; i++ ){			
		for(int j =i ; j< size; j++ ){			
			if(arr[i] + arr[j] == sum){
				temp[0]= arr[i];
				temp[1]=arr[j];
				print(temp,2);
				
			}
		}
		
	}
	return 0;
}

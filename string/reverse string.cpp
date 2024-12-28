#include<iostream>
using namespace std;

int getLength(char name[]){
	int count=0;
	for(int i =0; name[i]!='\0';i++){
		count++;
		}
	return count;
	}
	
void reverse(char name[]){
	int s=0;
	int e = getLength(name)-1;
	
	while(s<e){	
		char temp = name[s];
		name[s] = name[e];
		name[e]=temp;
		s++;e--;
		
	}
}
	

int main(){
	char name[10];
	
	cin>>name;
	
	reverse(name);
	
	cout<<name<<endl;
	return 0;
	
}


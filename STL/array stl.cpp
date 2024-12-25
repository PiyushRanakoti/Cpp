#include<iostream>
#include<array>
using namespace std;

int main(){
	int basic[] = {1,23,4,5};
	
	array<int,4> a = {1,2,3,4};
	
	int size = a.size();
	
	for(int i:a)
		cout<<i<<endl;
		
	cout<<"element at 2 "<<a.at(2)<<endl;
	
	cout<<"empty or not : "<<a.empty()<<endl;//for for whether array empty or not
	
	cout<<"first element "<<a.front()<<endl; //return first element
	cout<<"last element "<<a.back()<<endl; // return last element

	
	
	return 0;
	
}


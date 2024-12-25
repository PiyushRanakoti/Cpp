#include<iostream>

#include<vector>
using namespace std;


//vector is same as array but with dynamic size 
int main(){
	vector<int> v= {1,2,3,4};
	
	cout<<"capcity ->"<<v.capacity()<<endl;
	v.push_back(5); // add new elemets
	cout<<"capacity ->"<<v.capacity()<<endl; // prints capacity of vector
	
	cout<<"size->"<<v.size()<<endl;
	v.pop_back();// removes element from back 5
	
	for(int i=0;i<v.size();i++)
		cout<<v[i]<<endl;
	
	cout<<"element at 2nd index: "<<v.at(2)<<endl; //return elemetn at spefic index
	
	cout<<"back : "<<v.back()<<endl;
	cout<<"front : "<<v.front()<<endl;
	
	v.clear(); //clears all element from vector
	cout<<"capacity after clear ->"<<v.capacity()<<endl; // capcity remain fix
	cout<<"size->"<<v.size()<<endl; // size changes
	
	
	vector<int>a(2,3);//intialsise vector of size 2 with values of all as 3

	for(int i :a)
		cout<<i<<endl;

	vector<int>b(a); //copy element of a into b
	cout<<"b: "<<endl;
	for(int i :b)
		cout<<i<<endl;
	return 0;
	
}


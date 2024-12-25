#include<iostream>
using namespace std;
#include<set>

//set stores only unique element 

int main(){
	set<int>s; 
	s.insert(5); // inserrt element in o(log n) due to bst;
	s.insert(4);
	s.insert(3);
	s.insert(5);
	for(auto i : s)
		cout<<i<<endl;
	
	
	s.erase(s.begin());
	
	for(auto i : s)
		cout<<i<<endl;
		
	cout<<"5 present in set : "<<s.count(5)<<endl; //finds element in set
	
	set<int>::iterator itr = s.find(5); //returns itertor of element 5
	
	cout<<*itr<<endl;// prints value at itr postiion
	return 0;
}


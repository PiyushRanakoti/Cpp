#include<iostream>
using namespace std;
#include<list>

//list is intialsied as doubly linked list;
int main(){
	list<int>l;
	
	l.push_back(1);
	l.push_front(2);
	l.push_back(3);
	for(int i : l)
		cout<<i<<endl;
		
	//empty(), begin(),at(),end()[o(1)] ,erase()(o(n) complexity here as need to go to every element to erase it
	
	l.erase(l.begin());
	
	cout<<"size of list : "<<l.size()<<endl;
	
	list<int>n(l); // copy l into n
	
	list<int>n1(5,100);
	for(int i : n1)
		cout<<i<<endl;
		return 0;
	
}


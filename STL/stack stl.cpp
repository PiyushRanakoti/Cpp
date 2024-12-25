#include<iostream>

#include<stack>
using namespace std;



// data struture that follows last in first out rule
int main(){
	stack<string> s;
	cout<<s.size()<<endl;
	
	s.push("hello");// adds element to stack
	s.push("world");
	s.pop(); // removes top element
	
	cout<<s.top()<<endl; // access top element
	
	s.pop();
	
	cout<<"empty ?"<<s.empty()<<endl;
	return 0;
	
}


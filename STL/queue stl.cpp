#include<iostream>
using namespace std;
#include<queue>
//follows first in first out

int main(){
	
	queue<string>q;
	
	q.push("hello"); //addds new element
	q.push("world");
	
	q.push("again");
	

		
	cout<<q.size()<<endl; // access back element
	q.pop(); //removes first element
	
	q.pop();
	q.pop();
	cout<<"empty :"<<q.empty()<<endl;
	cout<<"front : "<<q.front()<<endl; //access front element
	return 0;
	
}


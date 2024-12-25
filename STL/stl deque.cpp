#include<iostream>
#include<deque>
using namespace std;

//deque is doubly ended queue with addition and deletion from both ends;
int main(){
	deque<int>d;
	
	d.push_back(1);
	d.push_front(2); //two comes in front
	
	for(int i : d)
		cout<<i<<endl;
		
	d.pop_front(); // removese element from front
	
	d.push_front(3);
	
	cout<<"element at first index: "<<d.at(1)<<endl;
	
	cout<<"deque elmpty ? "<<d.empty()<<endl;
	
	d.erase(d.begin(),d.begin()+1); // erase element from given range
		d.erase(d.begin(),d.begin()+1); // erase element from given range

		cout<<"deque elmpty ? "<<d.empty()<<endl;
		
	d.push_back(1);
	d.push_front(2);
	d.clear();
	cout<<d.size()<<endl;
	cout<<"print max size : "<<d.max_size()<<endl; // returns orginal maxsize of deque	
		

	
	for(int i : d)
		cout<<i<<endl;
	return 0;
	
}


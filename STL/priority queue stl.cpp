#include<iostream>
using namespace std;
#include<queue>

// queue which has first element greatest and relates to max heap by default


int main(){
	priority_queue<int>p; // max heap
	
	priority_queue<int,vector<int>,greater<int> > m; // max heap

	p.push(2);
	p.push(0);
	p.push(100);
	int n = p.size();
	for(int i=0;i<n;i++){
		cout<<p.top()<<endl;
		p.pop();
}


	m.push(2);
	m.push(0);
	m.push(100);
	n = m.size();
	for(int i=0;i<n;i++){
		cout<<m.top()<<endl;
		m.pop();
}
	cout<<"empty ? "<<m.empty()<<endl;
	return 0;
	
}


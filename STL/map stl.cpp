#include<iostream>
using namespace std;

#include<map>

// map holds key-value pair where each key is unique
int main(){
	map<int,string>m; // reutns in sorted key order
	
	m[1]="beat";
	m[12]="punch";
	m[3]="bmw";
	m.insert({5,"martui"}); //insert new element 

	m.erase(12); //erase punch

	for(auto i:m){
		cout<<i.first<<" "<<i.second<<endl;
	}

	auto it = * (m.find(5));
	
	cout<< (it).second <<endl ;	
	
	cout<<"finding 12 "<<m.count(12)<<endl;//whether 12 present or not
	return 0;
	
}


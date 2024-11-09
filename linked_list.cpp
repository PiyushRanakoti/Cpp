#include <iostream>
using namespace std;
#include<stdlib.h>

//structure of LINKED List LL
struct LL{
    int data;
    struct LL * next;
}; 

//this function create a New Node in linked list
struct LL* create(int data){
    struct LL* New ;
    New = (struct LL*)malloc(sizeof(struct LL));
    New -> data = data;
    New-> next = NULL;
    return New;
}


//this function displays linked list

void display(struct LL * head){
	struct LL* temp = head;
	while(temp != NULL){
		cout<< temp -> data << endl;
		temp = temp->next;
	}
	
}

//this function Insert a New Node in linked list at end

struct LL* InsertEnd(struct LL * head,int data){
	
	struct LL* Node = create(data);
	
	if(head == NULL){
		return Node;
	}
	
	struct LL* temp = head;
	while(temp->next != NULL){
		temp = temp->next;
	}
	temp->next = Node;
	return head;
}


//this function Insert a New Node in linked list at start

struct LL* InsertStart(struct LL*head,int data){
	struct LL* node = create(data);
	if(head == NULL){
	
		return node;
}
	node -> next = head;
	return node;
}


//this function deletes head of List
struct LL* DeleteStart(struct LL*head){
	if(head==NULL)
		return NULL;
	return head-> next;
}


// this function deletes last node of list
struct LL* DeleteEnd(struct LL*head){
	if(head == NULL || head-> next == NULL)
		return NULL;
	struct LL* temp = head;
	while(temp->next->next != NULL)
		temp = temp->next;
	temp->next = NULL;
	return head;	
}

//this function insert New Node at specified position
struct LL* Position(struct LL*head,int data, int p){
	if(head == NULL){
		return InsertStart(head,data);
	}
	struct LL* temp =head;
	for(int i = 0; i<=p;i++){
		if(i == p-1){
			struct LL* Node = create(data);
			Node -> next = temp->next;
			temp->next= Node;
			return head;
		}
		if(i!=p && temp == NULL){
			cout << p <<" position not exist"<<endl;
			return head;
		}
		temp = temp->next;
	}
	return head;	
}

int main() {
    struct LL*head = NULL;
    
    head = InsertStart(head,1); //1
    
	  InsertEnd(head,2); // 1 2 
    InsertEnd(head,3); // 1 2 3 
	  InsertEnd(head,4); // 1 2 3 4
    InsertEnd(head,5); // 1 2 3 4 5
	
	  head = InsertStart(head,0); // 0 1 2 3 4 5
	  head = Position(head,100,4); // 0 1 2 3 100 4 5
		
	  display(head);
    return 0;
}

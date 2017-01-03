//============================================================================
// Name        : Doubly.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class List{
private:
	struct node{
		int data;
		node *next;
		node *prev;
	};
	node *head;
	node *tail;
	node *curr;
	node *prev;

public:
	List();
	void addData(int aData);
	void delData(int dData);
	void printforward();
	void printbackward();
};
List::List(){
	head=NULL;
	tail=NULL;
	curr=NULL;
	prev=NULL;
}
void List::addData(int aData){
	node *newnode = new node();
	newnode->data=aData;
	if (head==NULL){
		head=newnode;
	}
	else{
		curr=head;
		while(curr->next!=NULL){
			curr=curr->next;
		}
		newnode->prev=curr;
		curr->next=newnode;
		tail=curr->next;
	}
}
void List::printforward(){
	curr=head;
	while(curr!=NULL){
		cout << curr->data<< " ";
		curr=curr->next;
	}
	cout << endl;
}
void List::printbackward(){
	curr=tail;
	while(curr!=NULL){
		cout<< curr->data<< " ";
		curr=curr->prev;
	}
	cout << endl;
}

void List::delData(int dData){
	node *delnode = NULL;
	curr=head;
	while(curr!=NULL && curr->data!=dData){
		curr=curr->next;
	}
	if(curr==NULL){
		cout<< dData << " is not in the list" << endl;
		delete delnode;
	}
	else{
		delnode=curr;
		prev=curr->prev;
		curr=curr->next;
		prev->next=curr;
		if(delnode==head){
			head=head->next;
		}
		else if(delnode==tail){
			tail=tail->prev;
		}
		else{
			curr->prev=prev;
		}
		cout << dData << " is deleted from the list" << endl;
		delete delnode;
	}
}


int main() {
	List sam;
	sam.addData(5);
	sam.addData(4);
	sam.addData(3);
	sam.addData(2);
	sam.addData(1);
	sam.printforward();
	sam.printbackward();
	sam.delData(4);
	sam.printforward();
	sam.printbackward();
	sam.delData(1);
	sam.printforward();
	sam.printbackward();


}

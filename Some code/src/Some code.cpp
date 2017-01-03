//============================================================================
// Name        : Some.cpp
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
	};
	node *head;
	node *current;
	node *before;
	node *after;

public:
	List();
	~List();
	void addData(int aData);
	void delData(int dData);
	void print();
	void reverse();
};
List::List(){
	head=NULL;
	current=NULL;
	before=NULL;
	after=NULL;
}
List::~List(){

}
void List::addData(int aData){
	node* addnode;
	addnode=new node();
	addnode->data=aData;
	if(head==NULL){
		head=addnode;
	}
	else{
		current=head;
		while(current->next!=NULL){
			current=current->next;
		}
		current->next=addnode;
	}
}
void List::delData(int dData){
	node* delnode;
	delnode=NULL;
	current=head;
	before=head;
	while(current!=NULL&&current->data!=dData){
		before=current;
		current=current->next;
	}
	if (current==NULL){
		cout << "No such data" << endl;
		delete delnode;
	}
	else{
		delnode=current;
		current=current->next;
		before->next=current;
		if(delnode==head){
			head=head->next;
			before=NULL;
		}
		delete delnode;
	}
}
void List::print(){
	current=head;
	while(current!=NULL){
		cout << current->data << " ";
		current=current->next;
	}
	cout << endl;
}
void List::reverse(){
	before=NULL;
	after=NULL;
	current=head;
	while(current!=NULL){
		after=current->next;
		current->next=before;
		before=current;
		current=after;
	}
	head=before;
}


int main() {
	List sam;
	sam.addData(4);
	sam.addData(5);
	sam.addData(6);
	sam.addData(7);
	sam.print();
	sam.reverse();
	sam.print();

}

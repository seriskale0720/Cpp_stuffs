//============================================================================
// Name        : Single.cpp
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
	node *current;
	node *before;
	node *after;
	node *head;
public:
	List();
	~List();
	void addData(int aData);
	void delData(int dData);
	void insertat(int iData, int position);
	void reverse();
	void print();
	void autoincrement (int start, int end);
};
List::List(){
	current=NULL;
	before=NULL;
	head=NULL;
	after=NULL;
}
List::~List(){
	cout << "Deconstructed" << endl;
}
void List::addData(int aData){
	node *addnode= new node();
	addnode->data = aData;
	if (head==NULL){
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
	node *delnode = NULL;
	current=head;
	before=head;
	while(current!=NULL && current->data!=dData){
		before=current;
		current=current->next;
	}
	if (current==NULL){
		cout << dData << " is not in the list" << endl;
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
void List::insertat(int iData, int position){
	node *addnode = new node();
	addnode->data = iData;
	if(position == 1){
		addnode->next=head;
		head=addnode;
	}
	else{
		current = head;
		for (int i=0;i<position-2;i++){
			current=current->next;
		}
		addnode->next=current->next;
		current->next=addnode;
	}
}
void List::reverse(){
	current=head;
	before=NULL;
	after=NULL;
	while(current!=NULL){
		after=current->next;
		current->next=before;
		before=current;
		current=after;
	}
	head=before;
}
void List::autoincrement(int start, int end){
	for(int i=start; i<=end; i++){
		node *addnode = new node();
		addnode->data = i;
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
}

void List::print(){
	current=head;
	while(current!=NULL){
		cout << current->data << " ";
		current=current->next;
	}
	cout << endl;
}
int main(){
	List sam;
	sam.addData(5);
	sam.addData(4);
	sam.addData(3);
	sam.print();
	sam.delData(5);
	sam.delData(3);
	sam.print();
	sam.addData(6);
	sam.addData(5);
	sam.addData(7);
	sam.print();
	sam.reverse();
	sam.print();
	sam.insertat(8,2);
	sam.print();
	sam.autoincrement(1,10);
	sam.print();
	sam.reverse();
	sam.print();
}


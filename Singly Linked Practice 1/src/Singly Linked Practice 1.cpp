//============================================================================
// Name        : Singly.cpp
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
	node *after;
	node *before;
	node *current;
	node *head;
	int count;
public:
	List();
	~List();
	void addData(int aData);
	void delData(int dData);
	void print();
	void reverse();
	void research(int sData);
	void recursive(node *search, int sData);
	void autoincrement(int start, int stop);
	void insertat(int iData, int position);
};
List::List(){
	after=NULL;
	before=NULL;
	current=NULL;
	head=NULL;
	count=0;
}
List::~List(){
	cout << "deconstructed" << endl;
}
void List::addData(int aData){
	node *newnode = new node();
	newnode->data = aData;
	if(head==NULL){
		head=newnode;
	}
	else{
		current=head;
		while(current->next!=NULL){
			current=current->next;
		}
		current->next=newnode;
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
	if(current==NULL){
		cout << dData << " was not in the list" << endl;
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
		cout << dData << " was deleted" << endl;
		delete delnode;
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
	cout << "List is reversed" << endl;
}
void List::research(int sData){
	current=head;
	recursive(current,sData);
	count=0;
}
void List::recursive(node *search, int sData){
	if(search == NULL){
		if(count == 0){
			cout << "there was no such data" << endl;
		}
		else if (count == 1){
			cout << count << " entry was in the list" << endl;
		}
		else {
			cout << count << " entries was in the list" << endl;
		}
	}
	else if(search->data == sData){
		count++;
		recursive(search->next, sData);
	}
	else{
		recursive(search->next, sData);
	}
}
void List::autoincrement(int start, int stop){
	int i;
	for(i=start; i<=stop; i++){
		node *newnode = new node();
		newnode->data=i;
		if(head==NULL){
			head=newnode;
		}
		else{
			current=head;
			while(current->next!=NULL){
				current=current->next;
			}
			current->next=newnode;
		}
	}
	cout<< "List from " << start << " to " << stop << " was added" << endl;
}
void List::insertat(int iData, int position){
	node *newnode = new node();
	newnode->data=iData;
	if(position == 1){
		newnode->next=head;
		head=newnode;
	}
	else{
		current=head;
		for (int i=0;i<position-2;i++){
			current=current->next;
		}
		newnode->next=current->next;
		current->next=newnode;
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
	sam.delData(3);
	sam.print();
	sam.addData(3);
	sam.addData(2);
	sam.addData(1);
	sam.print();
	sam.reverse();
	sam.print();
	sam.autoincrement(1,10);
	sam.print();
	sam.insertat(5,4);
	sam.print();
}

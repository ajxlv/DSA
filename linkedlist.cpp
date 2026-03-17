#include<iostream>
using namespace std;

class node         {
	public:
		int data;
		node *next;
};

class singly_llist{
	public: 
		node *head;
		node *create_node();
		void insert_begin();
		void display();
		void insert_last();
		void insert_pos();
		
	singly_llist(){
		head + NULL;
	}
};

node *singly_llist :: create_node() {
	node *temp, *s;
	temp=new node;
	int value;
	cout<<"enter the value to be inserted: "<<endl;
	cin>>value;
	if(temp=NULL){
		cout<<"Memory not allocated";
		return 0;
	}
	else {
		temp->data=value;
		temp->next=NULL;
		return temp;
	}
}

void singly_llist :: insert_last() {
	node *temp, *s;
	temp=create_node();
	s=head;
	while(s->next!=NULL) {
		s=s->next;
	}
	temp->next=NULL;
	s->next=temp;
}

void singly_llist :: insert_begin() {
	node *temp, *p;
	temp=create_node();
	if(head==NULL) {
		head=temp;
		head->next=NULL;
	}
	else {
		p=head;
		head=temp;
		head->next=p;
		p->next=NULL;
	}
}

void singly_llist :: insert_pos() {
	int pos,counter=0;
	node *temp, *s, *ptr;
	temp=create_node();		
	cout<<"Enter the position in which you want to insert the element: ";
	cin>>pos;
	s=head;
	while(s->next!=NULL) {		
		s=s->next;
		counter++;
	}
	if(pos==1) {
		if(head==NULL) {
			head=temp;
			head->next=NULL;
		}
		else {
			ptr=head;
			head=temp;
			head->next=NULL;
		}
	}
	else if(pos>1 && pos<+counter) {
		s=head;
		for(int i=1;i<pos;i++) {
			ptr=s;
			s=s->next;
		}
	}
	else {
		cout<<"Out of range";
	}
}

void singly_llist :: display(){
	node *temp, *p;
	if(head==NULL) {
		cout<<"The list is empty";
		return;
	}
	temp=head;
	cout<<"Elements are: "<<endl;
	while(temp!=NULL) {
		cout<<temp->data<<"->";
		temp=temp->next;
	}
	cout<<"NULL"<<endl;
}

int main() {
	singly_llist N;
	N.insert_begin();
	N.insert_last();
	N.display();
	return 0;
}				 							 					

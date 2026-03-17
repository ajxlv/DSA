#include<iostream>
using namespace std;

class node{
    public:
        int data;
        node *next;
};
class single_llist{
    public:
        node *Head;
        node *create_node();
        void insert_begin();
        void insert_pos();
        void insert_last();
        void delete_pos();
        void display();

        single_llist(){
            Head=NULL;
        }
};

node *single_llist::create_node()
{
    node *temp,*s;
    temp=new node;
    int value;
    cout<<"Enter the value to be inserted: ";
    cin>>value;
    if(temp==NULL){
        cout<<"Memory is not allocated";
        return 0;
    }
    else{
        temp->data=value;
        temp->next=NULL;
        return temp;
    }
    
}

void single_llist::insert_begin()
{
    node *temp,*p;
    temp=create_node();
    if(Head==NULL){
        Head=temp;
        Head->next=NULL;
    }
    else{
        p=Head;
        Head=temp;
        Head->next=p;
    }
    cout<<"Element inserted at beginning"<<endl;
}

void single_llist::insert_last()
{
    node *temp,*s;
    temp=create_node();
    s=Head;
    while(s->next!=NULL){
        s=s->next;
    }
    s->next=temp;
    temp->next=NULL;
    cout<<"Element is inserted at last"<<endl;
}

void single_llist::insert_pos()
{
    int i,pos,counter=0;
    node *temp,*s,*ptr;
    temp=create_node();
    cout<<"Enter the position at which node to be inserted: ";
    cin>>pos;
    s=Head;
    while(s->next!=NULL){
        s=s->next;
        counter++;
    }
    if(pos==1){
        if(Head==NULL){
            Head=temp;
            Head->next=NULL;
        }
        else{
            ptr=Head;
            Head=temp;
            Head->next=ptr;
        }
    }
    else if(pos>1 && pos<=counter){
        s=Head;
        for(i=0;i<pos;i++){
            ptr=s;
            s=s->next;
        }
        ptr->next=temp;
        temp->next=s;
    }
    else{
        cout<<"Position is out of range";
    }
}

void single_llist::delete_pos()
{
    int i,pos,counter=0;
    if(Head==NULL){
        cout<<"List is empty";
        return;
    }
    cout<<"Enter the position of node to be deleted: ";
    cin>>pos;
    node *s,*ptr;
    s=Head;   
    if(pos==1){
        Head=s->next;
    }
    else{
        while(s!=NULL){
            s=s->next;
            counter++;
        }
        if(pos>0 && pos<=counter){
            s=Head;
            for(i=1;i<pos;i++){
                ptr=s;
                s=s->next;
            }
            ptr->next=s->next;
        }
        else{
            cout<<"Position is out of range"<<endl;
        }
        free(s);
        cout<<"Element is deleted"<<endl;
    }
}

void single_llist::display()
{
    node *temp;
    if(Head==NULL){
        cout<<"The list is empty";
        return ;
    }
    temp=Head;
    cout<<"Elements of list are: ";
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL";
    cout<<endl;
}

int main(){
    single_llist s;
    s.create_node();
    s.insert_begin();
    s.insert_last();
    s.insert_pos();
    s.delete_pos();
    s.display();

    // do{
    // int ch;
    // cout<<"**********MENU**********"<<endl;
    // cout<<"1: Insert node at beginning"<<endl;
    // cout<<"2: Insert node at end"<<endl;
    // cout<<"3: Insert node at any position"<<endl;
    // cout<<"4: Delete node at any position"<<endl;

    // cout<<"Enter your choice: ";
    // cin>>ch;

    // single_llist s;
    // s.create_node();
    
    // switch (ch){
    // case 1:
    //     s.insert_begin();
    //     break;
    
    // case 2:
    //     s.insert_last();
    //     break;
    
    // case 3:
    //     s.insert_pos();
    //     break;

    // case 4:
    //     s.delete_pos();
    //     break;
    // default:
    //     break;
    // }
    // s.display();
    // }while (true);   
}

#include<iostream>
using namespace std;

class node
{  
public :
   int data ;
   node*next;

};

class single_llist
{
  public:
         node*Head;
         node*create_node();
         void insert_begin();
         void display();
         void insert_last();
         void insert_pos();
         void delete_pos();
         void delete_first();
         void delete_last();
         single_llist()
         {
           Head = NULL; 
         }
};

node*single_llist::create_node()
{
  node*temp,*s;
  temp = new node;
  int value;
  cout<<"Enter the value to be inserted ";
  cin>>value;
  if(temp==NULL)
  {
   cout<<"Memory not allocated "<<endl;
   return 0;
  }
   else
   {
     temp->data = value;
     temp->next = NULL;
     return temp;
   }
   
 }

void single_llist::insert_begin()
{
   node*temp,*p;
   temp = create_node();
   if(Head == NULL)
   {
      Head = temp;
      Head->next = NULL;
    }
    else 
    {
      p = Head;
      Head = temp;
      Head->next=p;
    }
    
    cout<<"Element inserted at begining "<<endl;
}

void single_llist::display()
{
  node*temp;
  if(Head == NULL)
  {
    cout<<"The list is Empty "<<endl;
    return;
  }
  temp = Head;
  cout<<"Elements of list are : "<<endl;
  while(temp!=NULL)
  {
   cout<<temp->data<<"->" ;
   temp = temp->next;
  }
  
  cout<<"NULL"<<endl;
}


void single_llist::insert_last()
{
  node*temp,*s;
  temp = create_node();
  s = Head;
  while(s->next!=NULL)
  {
    s = s->next;
  }
   temp->next = NULL;
   s->next = temp;
   cout<<"Element inserted at last "<<endl;
}

void single_llist::insert_pos()
{
 int value ,pos,counter=0;
 node*temp,*s,*ptr;
 temp = create_node();
 cout<<"Enter the position at which node to be inserted ";
 cin>>pos;
 int i ;
 s=Head;
 while(s!=NULL)
 {
  s=s->next;
  counter++;
 }
 
 if(pos==1)
 {
  if(Head ==NULL)
  {
     Head = temp;
     Head->next = NULL;
     }
  else 
      {
        ptr = Head;
        Head = temp;
        Head->next=ptr;
      }
    }
   else if ( pos>1 && pos<=counter)
   {
     s = Head;
     for(i=1;i<pos;i++)
     {
        ptr = s;
        s = s->next;
     }
     
     ptr->next = temp;
     temp->next = s;
   }
 else
   {
     cout<<"Position out of range "<<endl;
    }
}

void single_llist::delete_pos()
{
    int pos,i,counter=0;
    if(Head==NULL)
    {
    cout<<"List is Emptya"<<endl;
    return;
    }
    
    cout<<"Enter the position of value to be deleted : ";
    cin>>pos;
    node*s,*ptr;
    s=Head;
    if (pos==1)
    {
      Head = s->next;
     }
     
     else
        { 
          while(s!= NULL)
          {
             s= s->next;
             counter++;
           }
           
           if(pos>0 && pos<=counter)
           {
  		s = Head;
  		for(i=1;i<pos;i++)
  		  {
  		    ptr = s;
  		    s = s->next;
  		  }
  		  
  		  ptr->next = s->next ;
  		 }
  		 
  		 else
  		   {
  		     cout<<"Position out of range "<<endl;
  		    }
  		    
  		    free(s);
  		    cout<<"Element Deleted"<<endl;
  		 }
  }
  
void single_llist::delete_first() 
{
    if (Head == NULL)
     {
        cout << "List is empty" << endl;
        return;
    }

    node* s;
    s=Head;
    Head = s->next;
    delete s;
    cout << "First element deleted" << endl;
}

void single_llist::delete_last() {
    if (Head == NULL) {
        cout << "List is empty" << endl;
        return;
    }

    if (Head->next == NULL) {
        delete Head;
        Head = NULL;
        cout << "Last element deleted" << endl;
        return;
    }

    node* s = Head;
    node* prev = nullptr;
    while (s->next != NULL) {
        prev = s;
        s = s->next;
    }
    delete s;
    prev->next = NULL;
    cout << "Last element deleted" << endl;
}

int main()
{
   single_llist s1;
    s1.insert_begin();
    s1.insert_last();
    s1.insert_pos();
    s1.delete_pos();
    s1.delete_first();
    s1.delete_last();
    s1.display();
    
    
 return 0;
}

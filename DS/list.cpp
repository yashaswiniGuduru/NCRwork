#include<iostream>
using namespace std;
struct node
{
	int data;
	struct node* next;
};
void print(struct node*);
class list
{
	public:
		struct node* s;
		list();
		void insertfirst(int );
		void insertlast(int);
		void insertafter(int,int);
		void insertbefore(int,int);
		int deletefirst();
		int deletelast();
		void deletespecific(int);
		void display();
		void print(struct node*);
		void display1();
		void reverse();
};
list::list()
{
	s=NULL;
}
void list::insertfirst(int x)
{
	struct node* temp;
	temp=new node;
	temp->data=x;
	temp->next=NULL;
	if(s==NULL)
		s=temp;
	else
	{
		temp->next=s;
		s=temp;
	}
}
void list::insertlast(int x)
{
	struct node* temp,*curr;
	temp=new node;
	temp->data=x;
	temp->next=NULL;

	if(s==NULL)
		s=temp;
	else
	{       
		curr=s;
		while(curr->next!=NULL)
		{
			curr=curr->next;
		}
		curr->next=temp;
	}
}
void list::insertafter(int srch,int x)
{
	if(s!=NULL)
	{
		struct node* curr;
		curr=s;
		while(curr!=NULL && curr->data!=srch)
		{
			curr=curr->next;
		}
		if(curr!=NULL)
		{
			struct node *tmp;
			tmp=new node;
			tmp->data=x;
			tmp->next=curr->next;
			curr->next=tmp;
		}
		else
		{
			cout<<"not found"<<endl;
		}
	}
	else
		cout<<"empty"<<endl;
}
void list::insertbefore(int srch,int x)
{
	if(s!=NULL)
	{
		struct node* curr;
		curr=s;
		while(curr->next!=NULL && curr->next->data!=srch)
		{
			curr=curr->next;
		}
		if(curr->next!=NULL)
		{
			struct node* temp;
			temp=new node;
			temp->data=x;
			temp->next=curr->next;
			curr->next=temp;
		}
		else
		{
			cout<<"not found"<<endl;
		}
	}
	else
		cout<<"empty";
}
int list::deletefirst()
{
	int x;
	if(s!=NULL)
	{
		struct node* curr;
		curr=s;
		x=curr->data;
		s=curr->next;
		delete curr;
	}
	return x;
}
int list::deletelast()
{
	int x;
	if(s!=NULL)
	{
		struct node* curr,*temp;
		curr=s;
		while(curr->next->next!=NULL)
			curr=curr->next;
		x=curr->next->data;
		temp=curr->next;
		curr->next=NULL;
		delete temp;
	}
	return x;
}
void list::deletespecific(int x)
{
	if(s!=NULL)
	{
		struct node* temp,*curr;
		temp=s;
		while(temp!=NULL && temp->next->data!=x)
		{
			temp=temp->next;
		}
		if(temp!=NULL)
		{
			curr=temp->next;
			temp->next=NULL;
			delete curr;
		}
		else
			cout<<"not found"<<endl;
	}
	else
	{
		cout<<"empty"<<endl;
	}
}
	
void list::reverse()
{
	struct node* rev=NULL;
	struct node* temp;
	if(s!=NULL)
	{
		if(s->next!=NULL)
		{
			while(s!=NULL)
			{
				temp=s;
				s=temp->next;
				temp->next=rev;
				rev=temp;
			
		        }
			s=temp;
		}
	}
	else
	{
		cout<<"empty";
	}
}
void list::display()
{
	struct node* curr;
	curr=s;
	while(curr!=NULL)
	{
		cout<<curr->data<<endl;
		curr=curr->next;
	}
}
void list::display1()
{
	if(s!=NULL)
		print(s);
}
void list::print(struct node*curr)
{
	if(curr!=NULL)
	{
		print(curr->next);
		cout<<curr->data<<endl;
	}
}
int main()
{
	list l;
	l.insertfirst(2);
	l.insertlast(3);
	l.insertafter(2,7);
	l.insertbefore(7,5);
	l.deletefirst();
	l.deletelast();
	l.deletespecific(7);
	l.display();
	l.insertlast(8);
	l.display1();
	l.reverse();
	l.display();
}

#include<iostream>
using namespace std;
struct node
{
	int data;
	struct node* next;
};
class stack
{
	public:
		struct node* top;
		stack();
		void push(int);
		int pop();
		void display();
};
stack::stack()
{
	top=NULL;
}
void stack::push(int x)
{
	struct node* temp;
        temp=new node;
	temp->data=x;
	temp->next=NULL;
	if(top==NULL)
		top=temp;
	else
	{
		temp->next=top;
	        top=temp;
	}

}
int stack::pop()
{
	struct node* curr;
	curr=top;
	top=curr->next;
	int x=curr->data;
	delete curr;
}
void stack::display()
{
	struct node*curr=top;
	while(curr!=NULL)
	{
		cout<<curr->data;
		curr=curr->next;
	}
}
int main()
{
	stack s;
	s.push(3);
	s.push(4);
	s.push(1);
	s.display();
	s.pop();
	s.display();
}

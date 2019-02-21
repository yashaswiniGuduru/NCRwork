#include<iostream>
using namespace std;
struct node
{
	int data;
	struct node* next;
};
class queue
{
	public:
		struct node* start;
		queue();
		void insert(int);
		int delet();
		void display();
};
queue::queue()
{
	start=NULL;
}
void queue::insert(int x)
{
	struct node* rear;
       rear=start;
     
       struct node*temp;
       temp=new node;
	temp->data=x;
	temp->next=NULL;
	if(rear==NULL)
		start=temp;
	else
	{       while(rear->next!=NULL)
		{
			rear=rear->next;
		}
		rear->next=temp;
	        rear=rear->next;
	}

}
int queue::delet()
{
	struct node* front,*curr;
	front =start;
	curr=start;
	start=curr->next;
	front =start;
	int x=curr->data;
	delete curr;
	return x;
}
void queue::display()
{
	struct node*curr=start;
	while(curr!=NULL)
	{
		cout<<curr->data;
		curr=curr->next;
	}
}
int main()
{
	queue q;
	q.insert(3);
	q.insert(4);
	q.insert(1);
	q.display();
	q.delet();
	q.display();
}

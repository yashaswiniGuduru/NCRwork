#include<iostream>
using namespace std;
class queue
{
	int front,rear;
	int size;
	int *q;
	public:
	queue();
	void getsize(int);
	bool overflow();
	bool underflow();
	void enque(int);
	int deque();
	void display();
};
queue::queue()
	{
		front=0;rear=-1;
		size=0;
		q=NULL;
	}
void queue::getsize(int n)
{
	size=n;
	q=new int[n];
}
bool queue::overflow()
{
   return (rear==size-1);
}
bool queue::underflow()
{
  return (rear==-1&&front==-1);
}
void queue::enque(int x)
{
	if(!overflow())
		q[++rear]=x;
	else
		cout<<"overflow"<<endl;
}
int queue::deque()
{         int x;
	if(!underflow())
		x=q[front++];
         else
		 cout<<"empty"<<endl;
   return x;
}
void queue::display()
{
	for(int i=front;i<=rear;i++)
		cout<<q[i]<<endl;
}
int main()
{
	queue q1;
	int n;
	cin>>n;
	q1.getsize(n);
	q1.enque(2);
	q1.enque(3);
	q1.enque(7);
	q1.deque();
	//s.pop();
	q1.display();
}

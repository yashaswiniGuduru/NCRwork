#include<iostream>
using namespace std;
class cqueue
{
	int front,rear;
	int size;
	int *cq;
	public:
	cqueue();
	void getsize(int);
	bool overflow();
	bool underflow();
	void enque(int);
	int deque();
	void display();
};
cqueue::cqueue()
	{
		front=rear=-1;
		size=0;
		cq=NULL;
	}
void cqueue::getsize(int n)
{
	size=n;
	cq=new int[n];
}
bool cqueue::overflow()
{
   return (front==(rear+1)%size);
}
bool cqueue::underflow()
{
  return (rear==-1 && front==-1);
}
void cqueue::enque(int x)
{
	if(rear==size-1)
	{
		rear=-1;
		rear=((rear+1)%size);
		cq[rear]=x;
	}
	if(!overflow())
	{	//front=0;
	        rear=((rear+1)%size);
		cq[rear]=x;
	 }
	
}
int cqueue::deque()
{         int x;
	if(front==-1)
	{
		front=0;
		x=cq[front];
	}
	if(!underflow())
	{
		front=((front+1)%size);
		x=cq[front];
		
	}
         else
	 {
		 front=0;
		 cout<<"empty"<<endl;
	 }
   return x;
}
void cqueue::display()
{           int i;
	for(i=front;i!=rear;i=((i+1)%size))
	{
		cout<<cq[i]<<" ";
	}cout<<cq[i]<<endl;
}
int main()
{
	cqueue q1;
	int n;
	cin>>n;
	q1.getsize(n);
	q1.enque(2);
	q1.enque(3);
	q1.enque(7);
	q1.deque();
	q1.enque(5);
	q1.enque(4);
	q1.display();
}

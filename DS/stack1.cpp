#include<iostream>
#define MAX 50
using namespace std;
class stack
{
	int top;
	int size;
	int *s;
	public:
	stack();
	void getsize(int);
	bool isEmpty();
	bool isFull();
	void push(int);
	int pop();
	int peek();
	void display();
};
stack::stack()
	{
		top=-1;
		size=0;
		s=NULL;
	}
void stack::getsize(int n)
{
	size=n;
	s=new int[n];
}
bool stack::isEmpty()
{
   return (top==-1);
}
bool stack::isFull()
{
  return (top==size-1);
}
void stack::push(int x)
{
	if(!isFull())
		s[++top]=x;
	else
		cout<<"full"<<endl;
}
int stack::pop()
{         int x;
	if(!isEmpty())
		x=s[top--];
         else
		 cout<<"empty"<<endl;
   return x;
}
int stack::peek()
{
	int x;
	if(!isEmpty())
		x=s[top];
	else
		cout<<"empty";
	return x;
}
void stack::display()
{
	for(int i=0;i<=top;i++)
		cout<<s[i];
}
int main()
{
	stack s;
	int n;
	cin>>n;
	s.getsize(n);
	s.push(2);
	s.push(3);
	s.pop();
	s.display();
}

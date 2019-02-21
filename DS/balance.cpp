#include<iostream>
#include<cstring>
using namespace std;
int flag=1;
class stack
{       public:
	int top;
	int size;
	char *s;
	stack();
	void getsize(int);
	bool isEmpty();
	bool isFull();
	void push(int);
	int pop();
	int peek();
	char check(char);
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
	s=new char[n];
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
}
int stack::pop()
{         int x;
	if(!isEmpty())
		x=s[top--];
   return x;
}
int stack::peek()
{
	int x;
	if(!isEmpty())
		x=s[top];
	return x;
}
void stack::display()
{
	for(int i=0;i<=top;i++)
		cout<<s[i];
}
char stack::check(char ch)

{    
	if((ch==')' && peek()=='(')||(ch=='}' && peek()=='{')||(ch==']' && peek()=='['))
	{
	     pop();
	     
        }
      else 
      {
         flag=0;
         
      }
}      

int main()
{
	stack s1;
	int n;
	cin>>n;
	s1.getsize(n);
	char str1[50];
	//str=new char[n];
	cin>>str1;
	int len=strlen(str1);
	for(int i=0;i<len;i++)
	{
		char ch=str1[i];
		switch(ch)
		{
			case '(':
			case '{':
   			case '[':s1.push(ch);
				 break;
		        case ')':
		        case '}':
		        case ']':s1.check(ch);
		                 break;
			default:break;
		}
	}	
         if(flag==1&&s1.isEmpty())
	 cout<<"balanced";
	 else
	 cout<<"not balanced";	 

}

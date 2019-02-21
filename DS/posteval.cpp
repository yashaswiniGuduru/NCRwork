#include<iostream>
#include<ctype.h>
using namespace std;
class postfix
{
	int top;
	int size;
	int *s;
	public:
	postfix()
	{
		top=-1;
		size=0;
		s=NULL;
	}
	void getsize(int n)
	{
		size=n;
		s=new int[n];
	}
	void push(int x)
	{
		s[++top]=x;
	}
	int pop()
	{
		return s[top--];
	}
	int peek()
	{
		return s[top];
	}
	int eval(char *str)
	{
		for(int i=0;str[i]!='\0';i++)
		{
			if(isdigit(str[i]))
				push(str[i]-'0');
			else
			{
				int val1=pop();
				int val2=pop();
				switch(str[i])
				{
					case '+':push(val2+val1);
						 break;
					case '-':push(val2-val1);
						 break;
					case '*':push(val2*val1);
						 break;
					case '/':push(val2/val1);
						 break;
				}
			}
		}
		return pop();
		
	}

};
int main()
{
  postfix p;
  int n;
  cin>>n;
  p.getsize(n);
  char* s1=new char[n];
  cin>>s1;
  cout<<p.eval(s1);
}

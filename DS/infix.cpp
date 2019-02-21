#include<iostream>
#include<cstring>
#include<cstdlib>
using namespace std;
class infix
{
	int top,size;
	char *s;
	public:
	infix()
	{
		top=-1;
		s=NULL;
	}
	void getsize(int n)
	{
		size=n;
		s=new char[n];
	}
	void push(char x)
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
	int prec(char ch)
        {
		if(ch=='^')
			return 3;
		else if(ch=='*'||ch=='/')
			return 2;
		else if(ch=='+'||ch=='-')
			return 1;
                else
			return -1;
	}
	

void convert(char* str)
{
	string s1;
	//int len=strlen(str);
	push('N');
	for(int i=0;str[i]!='\0';i++)
	{     
		if(str[i]>='a'&& str[i]<='z'||str[i]>='A'&& str[i]<='Z')
                 s1+=str[i];
		else if(str[i]=='(')
			push('(');
		else if(str[i]==')')
		{
			while(peek()!='N' && peek()!='(')
			{
				char c=peek();
				pop();
				s1+=c;
			}
			if(peek()=='(')
			{
				char c=peek();
				pop();
			}
		}
		else
		{
			while(peek()!='N' && prec(str[i])<=prec(peek()))

			{
				char c=peek();
				pop();
				s1+=c;
			}
			push(str[i]);
		}
	}
	while(peek()!='N')
	{
		char c=peek();
		pop();
		s1+=c;
	}
	cout<<s1;
}
};
int main()
{
	infix i1;
	int n;
	cin>>n;
	i1.getsize(n);
	char* str=new char[n];
	cin>>str;
	i1.convert(str);
}




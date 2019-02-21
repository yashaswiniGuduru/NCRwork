#include<iostream>
using namespace std;
inline int add(int a,int b)
{
	 return a+b;
}
inline int sub(int a,int b)
{
	return a-b;
}
inline int mul(int a,int b)
{
	return a*b;
}
inline int div1(int a,int b)
{
	return a/b;
}
inline int mod(int a,int b)
{
	return a%b;
}

/*class inline1
{
	int a,b;
	public:
	inline1()
	{
		a=b=0;
	}
	inline1(int x,int y)
	{
		a=x;
		b=y;
	}
	void display()
	{
		cout<<a<<b<<endl;
	}
};*/
int main()
{
	int a,b,c,d,e;
	a=add(2,3);
	b=sub(4,2);
	c=mul(2,1);
	d=div1(10,2);
	e=mod(4,2);
	cout<<"add:"<<a<<"sub:"<<b<<"mul:"<<c<<"div:"<<d<<"mod:"<<e;
}


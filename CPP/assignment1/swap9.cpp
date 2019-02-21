#include<iostream>
using namespace std;
void val(int a,int b)
{
	int t=a;
            a=b;
	    b=t;
}
void reference(int &a,int &b)
{
	int t=a;
	a=b;
	b=t;
}
int main()
{
	//swap9 s1;
	int i,a,b;
	cin>>a>>b;
	cout<<"enter your choice:"<<endl;
	cin>>i;
	switch(i)
	{
		
		case 1:val(a,b);
		       break;
		case 2:reference(a,b);
     	       break;
		default:break;
	}
	cout<<a<<b;
	//s1.display();
}

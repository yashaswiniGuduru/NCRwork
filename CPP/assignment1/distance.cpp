#include<iostream>
using namespace std;
class distance2;
class distance1
{       int mtr,cm;
	public:
	distance1()
	{
		int mtr=cm=0;
	}
	distance1(int m,int c)
	{
		mtr=m;;
		cm=c;
	}
	friend void convert(distance1 d1,distance2 d2);
};
class distance2
{       int feet,inch;
	public:
	 
	distance2()
	{
		 feet=inch=0;
	}
	distance2(int f,int i)
	{
		feet=f;
		inch=i;
	}
	friend void convert(distance1 d1,distance2 d2);
};
void convert(distance1 d1,distance2 d2)
{
          	
		cout<<"meter:"<<((d1.mtr)*(3.28))+d2.feet;
		
}
	
int main()
{
	distance1 d1(5,2);
       distance2 d2(6,3);
       convert(d1,d2);
}       

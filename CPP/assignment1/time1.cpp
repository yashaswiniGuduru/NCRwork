#include<iostream>
using namespace std;
class Time1
{
	int hr;
	int min;
	int sec;
	public:
	Time1()
	{
		hr=min=sec=0;
	}
	Time1(int h,int m,int s)
	{
		hr=h;
		min=m;
		sec=s;
	}
	void add(Time1 *t1,Time1 *t2)
	{
		hr=t1->hr+t2->hr;
		min=t1->min+t2->min;
		sec=t1->sec+t2->sec;
	}
	void display()
	{
		cout<<hr<<":"<<min<<":"<<sec<<endl;
	}
};
int main()
{

	Time1 t3,
       	t(11,43,34),
	t1(15,25,8),
	t2(5,5,2);
	t.display();
	t3.add(&t1,&t2);
	t3.display();
	return 0;
}

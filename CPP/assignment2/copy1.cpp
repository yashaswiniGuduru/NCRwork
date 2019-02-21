#include<iostream>
using namespace std;
class Copy
{
	int x,y;
	public:
	Copy()
	{
		x=y=0;
	}
	Copy(int x1,int y1)
	{
		x=x1;
		y=y1;
	}
	Copy(const Copy &c)
	{
		this->x=c.x;
		this->y=c.y;
	}
	void display()
	{
		cout<<"x:"<<x<<endl;
		cout<<"y:"<<y<<endl;
	}
};
int main()
{
	Copy c1(2,3);
	Copy c2(c1);
	c2.display();

}


#include<iostream>
using namespace std;
class complex
{  public:
	float real;
	float img;
   
	complex()
	{
		real=img=0;
	}
	complex(float x)
	{
		real=img=x;
	}
	complex(float y,float z)
	{
		real=y;
		img=z;
	}
	friend complex add(complex c1,complex c2);
	friend complex mul(complex c1,complex c2);
	void display()
	{
		cout<<real<<"+"<<img<<"i"<<endl;
	}
};
complex add(complex c1,complex c2)
{       complex t;
	t.real=c1.real+c2.real;
	t.img=c1.img+c2.img;
	return t;
}
complex mul(complex c1,complex c2)
{
	complex t;
	t.real=(c1.real*c2.real)-(c1.img*c2.img);
	t.img=(c1.img*c2.real)-(c1.real*c2.img);
	return t;

}
int main()
{
	complex c1,c2(2),c3(5,6),c4(2,4),c5,c6;
	c5=add(c3,c4);
	c5.display();
	c6=mul(c3,c4);
	c6.display();
}


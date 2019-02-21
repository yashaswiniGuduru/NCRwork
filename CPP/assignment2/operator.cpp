#include<iostream>
using namespace std;
class complex
{
	float real;
	float img;
	public:
	complex()
	{
		real=img=0;
	}
	complex(float r,float i)
	{
		real=r;
		img=i;
	}

	complex operator+(complex c)
	{
		complex res;
		res.real=real+c.real;
		res.img=img+c.img;
		return res;
	}
	complex operator-(complex c)
	{
		complex res;
		res.real=real-c.real;
		res.img=img-c.img;
		return res;
	}
	complex operator-()
	{
		complex res;
		res.real=-real;
		res.img=-img;
		return res;
	}
	complex operator++()
	{
		++real;
		++img;
		return (*this);
	}
	complex operator++(int x)
	{
		complex res;
		res.real=real++;
		res.img=img++;
		return res;
	}
	complex operator+=(complex c)
	{
		this->real=this->real+c.real;
		this->img=this->img+c.img;
		return (*this);
	}
	complex operator,(complex c)
	{
		return c;
	}
	void display()
	{
		cout<<real<<"+"<<img<<"i"<<endl;
	}
	friend ostream & operator<<(ostream&,complex);
	friend istream & operator>>(istream&,complex);
	friend complex operator*(int ,complex);
};
complex operator*(int i,complex c)
{
	complex res;
	res.real=i*c.real;
	res.img=i*c.img;
	return res;
}
ostream & operator<<(ostream&, complex c)
{
	cout<<c.real<<endl;
	cout<<c.img<<endl;
	return cout;
}
istream & operator>>(istream&, complex c)
{
	cin>>c.real;
	cin>>c.img;
	return cin;
}

int main()
{
	complex c1(2,3),c2(2,2),c3,c4,c5,c6,c7,c8,c9;
	c3=c1+c2;
	c3.display();
	cout<<c1;
	c6=c1-c2;
	c6.display();
	c7=-c1;
	c7.display();
	c4=c1++;
	c4.display();
	c5=++c2;
	c5.display();
	c8+=c2;
	c5=2*c2;
	c5.display();
	cin>>c8;
	c9=c1,c2;
	c9.display();
}



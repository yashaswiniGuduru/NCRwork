#include<iostream>
using namespace std;
static int x;
class polar
{
	int angle,radius;
	public:
	polar(int a,int r)
	{
		angle=a;
		radius=r;
		x++;
		cout<<"no.of active objects:"<<x<<endl;
	}
};
int main()
{
	polar p1(2,3),p2(4,2);
}
	

#include<iostream>
#include<cmath>
using namespace std;
class Point
{
	int x,y;
	public:
		
		Point()
		{
			x=y=0;
		}
		Point(int a,int b)
		{
			x=a;
			y=b;
		}		
		friend void distance(Point p1,Point p2);
};
void distance(Point p1,Point p2)
{
	int t,s,u;
	t=(((p1.x-p2.x)*(p1.x-p2.x))+((p1.y-p2.y)*(p1.y-p2.y)));
	u=(int)t;
        s=sqrt(u);
        cout<<"distance:"<<s<<endl;
}

int main()
{
	Point p1(3,3),p2(3,3),p3;
	distance(p1,p2);
	
}



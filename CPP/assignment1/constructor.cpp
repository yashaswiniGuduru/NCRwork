#include<iostream>
using namespace std;
class Student
{
	int x,y;
	public:
		Student()
		{
                      x=y=0;
		      cout<<"default constructor"<<endl;
		}
		Student(int a,int b)
		{
			x=a;
			y=b;
			cout<<"parameterised constructor"<<endl;
		}
		Student(Student &a)
		{
			x=a.x;
			y=a.y;
			cout<<"copy constructor"<<endl;
		}
		~Student()
		{
			cout<<"destructor"<<endl;
		}
};
int main()
{
	Student s1,s2(3,4);
	cout<<sizeof(s1)<<endl;
	cout<<sizeof(s2)<<endl;
	Student s3(s2);
	cout<<sizeof(s3)<<endl;
}


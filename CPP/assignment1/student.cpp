#include<iostream>
#include<cstring>
using namespace std;
class Student
{       public:
	string stname;
	char grade;
	int marks1,marks2,marks3;
};
class CollegeCourse
{
	
	public:
		Student s;
		//string res;
	CollegeCourse()
	{
		s.stname=s.grade=s.marks1=s.marks2=s.marks3=0;
	}
	void set_Data(string t,char g,int x,int y,int z)
	{
		s.stname=t;
		s.grade=g;
		s.marks1=x;
		s.marks2=y;
		s.marks3=z;
	}
	int calculateAverage()
	{
		int total=(s.marks1+s.marks2+s.marks3)/3;
		return total;
	}
	void computeGrade()
	{
		int avg=calculateAverage();
		if(avg>60)
			cout<<"firstclass";
		else if(avg<60 && avg>50)
			cout<<"second class";
		else if(avg<50 && avg>60)
			cout<<"third class";
		else
			cout<<"fail";
	}
	void display()
	{
		cout<<"name:"<<s.stname<<"grade:"<<s.grade<<"marks:"<<s.marks1<<endl;
	}
};
int main()
{
     CollegeCourse c1,c2,c3;
     c1.set_Data("anu",'A',70,70,70);
     c1.display();
     c1.computeGrade();
}


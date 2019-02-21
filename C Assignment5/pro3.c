#include<stdio.h>
#include<stdlib.h>
struct complex
{
	int real,img;
};
enum operations{add=1,sub,mul,exits};

int main()
{
	printf("enter the operations\n");
	printf("1.add\n2.sub\n3.mul\n4.exits\n");
	struct complex c1,c2,c3;
	printf("enter your choice");
	int n;
	scanf("%d",&n);
	enum operations ch;
	if(n==1)
	{
		ch=add;
	}
	else if(n==2)
	{
		ch=sub;
	}
	else if(n==3)
	{
		ch=mul;
	}
	else
	{
		ch=exits;
	}
	printf("enter complex number1:");
	scanf("%d %d",&c1.real,&c1.img);
	printf("entr complex number2:");
	scanf("%d %d",&c2.real,&c2.img);
	if(ch==1)
	{
		c3.real=c1.real+c2.real;
		c3.img=c1.img+c2.img;
		printf("%d+%di",c3.real,c3.img);
	}
	else if(ch==2)
	{
		c3.real=c1.real-c2.real;
		c3.img=c1.img-c2.img;
		printf("%d+%di",c3.real,c3.img);
	}
	else if(ch==3)
	{
		c3.real=(c1.real*c2.real)-(c1.img*c2.img);
		c3.img=(c1.real*c2.img)+(c1.img*c2.real);
		printf("%d+%di",c3.real,c3.img);
	}
	else
		exit(0);

}

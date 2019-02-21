#include<stdio.h>
struct time
{
	int hr;
	int min;
	int sec;
};
int main()
{
	struct time t1;
	printf("enter the values:");
	scanf("%d %d %d",&t1.hr,&t1.min,&t1.sec);
	printf("time: %d:%d:%d",t1.hr,t1.min,t1.sec);
}


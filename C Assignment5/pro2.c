#include<stdio.h>
struct data
{
	int x;
	char ch;
}s;
union data1
{
	int x;
	char ch;
}u;
int main()
{       
	printf("size of structure:%d\:\n",sizeof(s));
	printf("size of union:%d",sizeof(u));
}

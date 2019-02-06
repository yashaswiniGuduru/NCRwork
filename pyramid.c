#include<stdio.h>
int main()
{
	int i,j,k;
	int nr=5;
	int nc=5;


	for(i=1;i<=nr;i++)
	{
		for(k=1;k<nc;k++)
		{
			printf(" ");
		}
		printf("%d",i);
		int temp=i;
		temp--;
		while(temp>0)
		{
			printf("%d",temp);
			temp--;
		}
		temp++;
		while(temp<i)
		{
			printf("%d",++temp);
			
		}
		nc--;
		printf("\n");
	}
}
		

 

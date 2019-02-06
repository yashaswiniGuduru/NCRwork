#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int arr[10]={0};
	int i=9;
	while(n!=0)
	{
		arr[i]=n%2;
		i--;
		n=n/2;
	}
	int p;
	int b;
	scanf("%d",&p);
	scanf("%d",&b);
	int j=0;
	while(j<=b && (p-1)>=0 && (p+b)<=9)
	{
		if(arr[p-1]==0 )
			arr[p-1]=1;
		else
			arr[p-1]=0;
		printf("%d",arr[p-1]);
		j++;
		p--;
	}
	int k=1;
	int sum=0;
	j=0;
	for(j=9;j>=0;j--)
	{
		sum=sum+arr[j]*k;
		k=k*2;

	}
	printf("%d",sum);

}



			
	
			

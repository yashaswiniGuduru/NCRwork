#include<stdio.h>
int main()
{
   int n,sum=0;
   scanf("%d",&n);
   while(n>0)
   {
      int a=n%10;
      //sum=sum*10+a;
printf("%d",a);
      n=n/10;
    }
   //printf("%d",sum);
}
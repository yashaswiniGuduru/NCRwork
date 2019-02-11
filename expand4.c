#include<stdio.h>
int main()
{
  char s[3];
  scanf("%s",s);
int i=(int)s[0];
int j=(int)s[2];
int k=0;
for(k=i;k<=j;k++)
{printf("%c",k);}
}

#include<stdio.h>
#include<string.h>
int main()
{
  char s[10];
  printf("enter the string: ");
  scanf("%s",s);
  int len=strlen(s);
  for(int i=0;i<len;i++)
  {
     s[i]=s[i]-32;
  }
  printf("upper case: %s\n",s);
  for(int i=0;i<len;i++)
    s[i]=s[i]+32;
  printf("lower case: %s",s);
}
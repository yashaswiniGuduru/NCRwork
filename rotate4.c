#include<stdio.h>
#include<string.h>
int main()
{
   char str[50];
   scanf("%s",str);
   int len=strlen(str);
   for(int i=0;i<len;i++)
    {
      for(int j=i+1;j<len;j++)
         printf("%c",str[j]);
      for(int j=0;j<=i;j++)
       {
         printf("%c",str[j]);
        }
      printf(" ");

    }
}
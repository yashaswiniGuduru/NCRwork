#include<stdio.h>
#include<stdio.h>
int match(char s1[],char s2[])
{
    char ch=s1[0];
   for(int i=0;s2[i]!='\0';i++)
    {
       if(s2[i]==ch)
          return i;
     }
    return -1;
}
    
int main()
{
   char s1[20],s2[20];
   scanf("%s %s",s1,s2);
   int x=match(s1,s2);
   printf("%d",x);
   return 0;
}
   
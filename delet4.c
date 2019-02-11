#include<stdio.h>
#include<string.h>
int main()
{
  char ch;
  scanf("%c",&ch);
  char s[10];
  scanf("%s",s);
  int len=strlen(s);
   int i,j=0;
  for(i=0;i<len;i++)
    {
      if(s[i]!=ch)
        {
          s[j++]=s[i];
           
         }
     }
    s[j]='\0';
    printf("%s",s);
}
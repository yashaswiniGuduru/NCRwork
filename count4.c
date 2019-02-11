#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
  char *s[5];int c=0;
  for(int i=0;i<5;i++)
   {
   char name[50];
  scanf("%[^\n]s",name);
  int len=strlen(name);
   s[i]=(char*)malloc((len+1)*sizeof(char));
    strcpy(s[i],name);
      for(int j=0;j<len;j++)
      {
        if(s[i][j]=='e')
        	{c++;}
      }
  fflush(stdin);
    }
     printf("%d",c);
   return 0;
}
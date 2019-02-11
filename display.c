#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
   int n;
   scanf("%d",&n);
   char *s[n];
   for(int i=0;i<n;i++)
   {
     char name[50];
     scanf("%s",name);
     int len=strlen(name);
     s[i]=(char*)malloc((len+1)*sizeof(char));
     strcpy(s[i],name);
    }
   printf("\nentered the strings are\n");
  for(int i=0;i<n;i++)
   printf("%s\n",s[i]);
}

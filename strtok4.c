#include<stdio.h>
#include<string.h>
int main()
{
  char *s,*t;
  scanf("%[^\n]s",s);
  t=strtok(s," ,.-");
  printf("tokens of a string:");
   while(t!=NULL)
   {
     printf("%s\n",t);
     t=strtok(NULL," ,.-");
   }
}
  
#include<stdio.h>
#include<string.h>
void rev(char* str)
{
   if(*str)
       rev(str+1);
    printf("%c",*str);
}
int main()
{
   char s[50];
   scanf("%s",s);
    rev(s);
}
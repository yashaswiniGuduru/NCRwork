#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
   int n;
   scanf("%d",&n);
   char *s[n];
   char temp[n];
   for(int i=0;i<n;i++)
   {
   
   	 char name[50];
   	 scanf("%s",name);
   	 int len=strlen(name);
    	 s[i]=(char*)malloc((len+1)*sizeof(char));
    	 strcpy(s[i],name);
   }
   for(int i=0;i<n-1;i++)
   {
     for(int j=i+1;j<n;j++)
     {
     if(strcmp(s[i],s[j])>0)
        {
           strcpy(temp,s[i]);
           strcpy(s[i],s[j]);
           strcpy(s[j],temp);
 	}
     }
   }
   printf("sorted list of strings\n");
   for(int i=0;i<n;i++)
    {
       printf("%s\n",s[i]);
    }
}

  
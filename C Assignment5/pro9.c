#include<stdio.h>
#include<ctype.h>
int main()
{
	FILE *fp;
	fp=fopen("anu.txt","a+");
	//fp=fopen("ashu.txt","a+");
	char ch,s;
	int i=0;
	while((ch=fgetc(fp))!=EOF)
	{
		if(islower(ch))
		{
		         printf("%c",toupper(ch));
		}
		if(isupper(ch))
		{ 
		   printf("%c",tolower(ch));
		}
	}
	if(ftell(fp)!=5)
	
		fseek(fp,5,SEEK_SET);
	
	printf("%c",fgetc(fp));
	
	
}



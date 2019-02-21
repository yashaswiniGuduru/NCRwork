#include<stdio.h>
int main()
{
	FILE *fp;
	char ch;
	fp=fopen("anu.txt","a+");
	while((ch=fgetc(fp))!=EOF)
	{
		
		printf("%c",ch);
	}
}

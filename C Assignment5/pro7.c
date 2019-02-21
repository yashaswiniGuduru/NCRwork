#include<stdio.h>
int main(int argc,char *argv[])
{
	FILE *fp;
	char compl[100],actual[100],ch;
	fp=fopen(argv[1],"r");
	int i=0;
	while((ch=fgetc(fp))!=EOF)
	{
		actual[i]=ch;
		compl[i]=(char)(~((int)ch));
		i++;
	}
	actual[i]='\0';
	compl[i]='\0';
	printf("actual content:%s\n",actual);
        printf("ones complement:%s\n",compl);
}

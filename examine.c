#include<stdio.h>
int main()
{
	
	char text[100];
		scanf("%[^\n]s",text);
		printf("%s",text);
		int i;
		int letter=0,tab=0,number=0,space=0;
		for(i=0;text[i]!='\0';i++)
		{
			if((text[i]>='A'&&text[i]<='Z')||(text[i]>='a'&&text[i]<='z'))
				letter++;
			else if(text[i]>='0'&&text[i]<='9')
				number++;
			else if(text[i]==' ')
				space++;
			else if(text[i]=='\t')
				tab++;
			else
			{
				printf("no char");
			}
			
	//sscanf("%s",text);
      // printf("%s",text);

}
printf("%d %d %d %d",letter,number,space,tab);
}


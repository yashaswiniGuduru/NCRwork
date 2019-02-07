#include<stdio.h>
int main()
{
	int a;
	scanf("%x",&a);
	while(1)
	{
		printf("1->Compliment \n");
		printf("2->Mask \n");
		printf("3->Shift \n");
		int p;
		scanf("%d",&p);
		switch(p)
		{
			case 1:
				printf("%x \n",~a);
				break;
			case 2:
				printf("lol \n");
				break;
			case 3:
				printf("%x \n",a<<1);
				printf("%x \n",a>>1);
				break;
		}
	}
}

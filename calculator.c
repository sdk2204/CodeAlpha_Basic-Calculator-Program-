#include<stdio.h>
#include<stdlib.h>
void main()
{
	int a,b,d;
	char c;
	while(1)
	{
		printf("\nEnter expression:(+ - / *). to discontinue press any other key\n");
		scanf(" %c",&c);
		printf("a=");
		scanf("%d",&a);
		printf("b=");
		scanf("%d",&b);
		switch(c)
		{
			case '+':
				printf("%d",(a+b));
				break;
			case '-':
				printf("%d",(a-b));
				break;
			case '*':
				printf("%d",(a*b));
				break;
			case '/':
				printf("%f",(float)a/(float)b);
				break;
			default:
				exit(0);
		}
	}
}
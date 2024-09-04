#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter a value");
	scanf("%d",&a);
	printf("enter b value");
	scanf("%d",&b);
	printf("enter c value");
	scanf("%d",&c);
	if(a>b&&a>c)
	{
		printf("a is the biggest value");
		
	}
	else if(b>a&&b>c)
	{
		printf("b is biggest number");
	}
	else
	{
		printf("c is biggest number");
	}
	return 0;
}

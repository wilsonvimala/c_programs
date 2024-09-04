#include<stdio.h>
int main()
{
	int a,b;
	printf("enter a value");
	scanf("%d",&a);
	printf("enter b value:");
	scanf("%d",&b);
	if(a>b)
	{
		printf("%d is greater than %d",a,b);
	}
	else
	{
		printf("%d is greater than %d",b,a);
		
	}
	return 0;
}
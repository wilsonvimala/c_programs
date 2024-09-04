#include<stdio.h>
int main()
{
	int a;
	printf("enter a value:");
	scanf("%d",&a);
	if(a>0)
	{
		printf("%d is positive number",a);
		
	}
	else if(a<0)
	{
		printf("%d is negative number",a);
	}
	else
	{
		printf("given number is zero");
	}
	return 0;
	
}
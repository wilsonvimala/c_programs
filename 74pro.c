#include<stdio.h>
int main()
{
	int a,f=1;
	printf("enter a number:");
	scanf("%d",&a);
	for(int i=1;i<=a;i++)
	{
		f=f*i;
	}
	printf("factorial of %d is %d", a,f);
return 0;
}
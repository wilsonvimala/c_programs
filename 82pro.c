#include<stdio.h>
int main()
{
	int a,b,c=0,c1=0;
	printf("enter starting number ");
	scanf("%d",&a);
	printf("enter ending number");
	scanf("%d",&b);
	while(a<=b)
	{
		if(a%2==0)
		{
			c=c+a;
		}
		else
		{
			c1=c1+a;
		}
		a++;
	}
	printf("sum of even numbers %d\n",c);
	printf("sum of odd numbers %d",c1);
	return 0;
}
#include<stdio.h>
int main()
{
	int a,b;
	printf("enter the last term");
	scanf("%d",&b);
	printf("even numbers\n");
	for(a=2;a<=b;a=a+2)
	{
		scanf("%d\n",a);
	}
	return 0;
}
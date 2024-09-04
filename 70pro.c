#include<stdio.h>
int main()
{
	int a,b,i;
	int s=0;
	printf("enter the first term");
	scanf("%d",&a);
	printf("enter the last term");
	scanf("%d",&b);
	for(i=a;i<=b;i++)
	{
		s+=i;
	}
	printf("sum of all numbers %d",s);
	return 0;
}
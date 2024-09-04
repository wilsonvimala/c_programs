#include<stdio.h>
int main()
{
	int a[]={2,4,6,8};
	for(int i=0;i<4;i++)
	{
		printf("%d\n",a[i]);
	}
	int ch,b;
	printf("enter the index of the element you want to change:");
	scanf("%d",&ch);
	printf("enter value");
	scanf("%d",&b);
	a[ch]=b;
	for(int i=0;i=b;i++)
	{
		printf("%d\n",a[i]);
	}
	return 0;
}
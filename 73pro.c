#include<stdio.h>
int main()
{
	int a,n,i,d;
	printf("enter starting year");
	scanf("%d",&a);
	printf("entering ending year");
	scanf("%d",&n);
	for(i=a;i<=n;i++)
	{
		if(i%4==0)
		{
			printf("%d is leap year\n",i);
		}
		else
		{
			printf("%d is not a leap year\n",i);
		}
	
		
	}
		return 0;
}
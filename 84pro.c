#include<stdio.h>
int main()
{
	int a,b;
	printf("enter starting year:");
	scanf("%d",a);
	printf("enter ending year");
	scanf("%d",b);
	do
	{
		if(a%4==0)
		{
			printf("%d is leap year\n",a);
		}
		else
		{
			printf("%d is not a leap year\n",a);
			
		}
		a++;
	}
	while(a<=b);
	return 0;
	
}
#include<stdio.h>
int  main()
{
	int a,b,c;
	printf("enter the first person age");
	scanf("%d",&a);
	printf("enter the second person age");
	scanf("%d",&c);
	printf("enter the third person age");
	scanf("%d",&c);
	if(a>b&&a>c)
	{
		printf("oldest is first person with %d age",a);
	}
	else if(b>a&&b>c)
	{
		printf("oldest is second with %d age",b);
		
	}
	else if(c>a&&c>b)
	{
		printf("oldest is third person with %d age",c);
	
	}
	else
	{
		printf("all are in equal age");
	}
	return 0;
	
}
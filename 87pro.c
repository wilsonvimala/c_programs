#include<stdio.h>
int main()
{
	int n;
	int i=1;
	printf("enter n:");
	scanf("%d",n);
	while(n<=i)
	{
		if(i==5)
		{
			break;
		}
		printf("%d\n",i);
		i++;
	}
	return 0;
}
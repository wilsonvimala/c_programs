#include <stdio.h>
int main()
{
	int i,a,b;
	printf("enter starting number");
	scanf("%d",&a);
	printf("enter ending number");
	scanf("%d",&b);
	for(i=b;i>=a;i--)
	{
		printf("%d\n",i);
	}
	return 0;
}
#include<stdio.h>
int main()
{
	int a,n,i,d;
	int s=0;
	printf("enter first term");
	scanf("%d",&a);
	printf("enter last term");
	scanf("%d",&n);
	for(i=a;i<=n;i++)
	{
		d=i*i;
		s+=i;
	}
	printf("sum of square values %d",s);
	return 0;
	
}
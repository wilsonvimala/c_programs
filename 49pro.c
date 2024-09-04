#include<stdio.h>
int main()
{
	int s,exp;
	printf("enter salary");
	scanf("%d",&s);
	printf("enter years of experience");
	scanf("%d", &exp);
	if(exp>5)
	{
		s*=0.05;
		printf("bonus is %d",s);
		
	}
	else
	{
		printf("no bonus");
	}
}
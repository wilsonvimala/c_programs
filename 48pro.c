#include<stdio.h>
int main()
{
	int a;
	printf("enter a value");
	scanf("%d",&a);
	a>0&&a<=9?printf("single digit number"):printf("it is not a single digit number");
	
}
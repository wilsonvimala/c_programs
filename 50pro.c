#include<stdio.h>
int main()
{
	int c,a;
	printf("enter total number of classes:");
	scanf("%d",&c);
	printf("enter number of classes attended");
	scanf("%d,&a");
	int attendance =a*100/c;
	if(a>=75)
	{
		printf("eligible for writing exams");
	}
	else
	{
		printf("not eligible for writing exams");
	}
}
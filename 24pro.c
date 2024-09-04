#include<stdio.h>
char x[50]="programming language";
void simple()
{
	char x[50]="language";
	printf("c is %s\n",x);
}
int main()
{
	simple();
	printf("c is %s",x);
	return 0;
}
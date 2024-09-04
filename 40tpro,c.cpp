#include <stdio.h>
int main()
{
	int a;
	printf("enter a symbol");
	scanf("%c",&a);
	if(a=='+'||a=='-'||a=='*'||a=='/'||a=='%')
	{
		printf("%c is arithmetic operator",a);
		
	}
    else 	
	{
		printf("%c is special character",a);
	}
	return 0;
}
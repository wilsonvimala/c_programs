#include <stdio.h>
int main()
{
	int a;
	printf("enter a symbol");
	scanf("%c",&a);
	if(a=='a'|| a=='A'|| a=='e'|| a=='E'|| a=='i'|| a=='I'|| a=='o'|| a=='0'|| a=='U'|| a=='u')
	{
		printf("%c is vowel",a);
	}
	else
	{
		printf("%c is consonnant",a);
	}
}
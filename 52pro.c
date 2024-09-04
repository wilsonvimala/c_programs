#include<stdio.h>
int main()
{
	float a;
	char c;
	printf("enter your marks");
	scanf("%f",&a);
	if(a<25)
	{
		c='f';
		
	}
	else if((a>=25)&&(a<45))
	{
		c='E';
	}
	else if((a>=45)&&(a<60))
	{
		c='c';
	}
	else if((a>=75&&(a<80)))
	{
		c='B';
	}
	else 
	{
		c='A';
	}
	printf("your grade is %c",c);
	return 0;
}
#include<stdio.h>
int main()
{
	int a;
	float v;
	char t;
	double b;
	long int q;
	int x=sizeof(a);
	int y=sizeof(v);
	int k=sizeof(t);
	int h=sizeof(b);
	int g=sizeof(q);
	printf("%d\n",x);
	printf("%d\n",y);
	printf("%d\n",k);
	printf("%d\n",h);
	printf("%d\n",g);
	return 0;
}
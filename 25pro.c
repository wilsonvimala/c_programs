#include <stdio.h>
int main()
{
	char text1[50];
	char text2[50];
	printf("enter first string");
	scanf("%s",text1);
	printf("enter second string");
	scanf("%s",text2);
	strcat(text1,text2);
	printf("the final string after string concatention is %s",text1);
	return 0;
}
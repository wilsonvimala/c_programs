#include <stdio.h>
int main()
{

int a,b,c,op;
printf("enter a number");
scanf("%d",&a);
printf("enter a number");
scanf("%d",&b);
printf("1-Add\n");
printf("2-Sub\n");
printf("3-Mul\n");
printf("4-div\n");
printf("enter your choice");
scanf("%d",&op);
 switch(op)
   {
 	case 1:
 		c=a+b;
 		printf("addition %d",c);
 		break;
 	case 2:
 		c=a-b;
 		printf("subtraction %d",c);
 	case 3:
	    c=a*b;
		printf("multiplication %d",c);
	case 4:
	    c=a/b;
		printf("division %d" ,c);
		break;
	case 5:
		printf("enter a vaild choice");
    }
return 0;				
	 	
 }



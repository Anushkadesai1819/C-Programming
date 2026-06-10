#include<stdio.h>
#include "calculator.h"
int main()
{
	int a,b,r,choice;
	printf("Enter two numbers:");
	scanf("%d %d",&a,&b);
	printf("For ADDITION please enter 1\nFor SUBTRACTION please enter 2\nFor MULTIPLICATION please enter 3\nFor DIVISION please enter 4:\t");
       scanf("%d",&choice);
       switch(choice)
	{
	   case 1:
		   r=sum(a,b);
		   printf("Sum is %d",r);
		   break;
	   case 2:
		   r=minus(a,b);
		   printf("Subtraction is %d",r);
		   break;
           case 3:
		   r=mul(a,b);
		   printf("Multiplication is %d",r);
		   break;
	   case 4:
		   r=div(a,b);
		   printf("Division is %d",r);
		   break;
	   default: 
		   printf("You entered wrong choice please enter correct :)");
	}
}

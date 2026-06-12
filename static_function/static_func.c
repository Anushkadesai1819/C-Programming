#include<stdio.h>
int func(int a,int b);
int main()
{
	int a,b;
	printf("Enter two numbers:\n");
	scanf("%d %d",&a,&b);
	int r=func(a,b);
	printf("Sum of %d and %d = %d",a,b,r);
}

#include<stdio.h>
static int sum(int a,int b);
int main()
{
	int a,b,r;
	printf("Enter two numbers:\n");
	scanf("%d %d",&a,&b);
	r=sum(a,b);
	printf("sum is:%d",r);
}

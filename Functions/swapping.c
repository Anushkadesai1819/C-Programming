#include<stdio.h>
int swap(int n1,int n2);//function declaration

int main()
{
	int result,n1,n2;
	printf("Enter two numbers which you want to swap:\n");
	scanf("%d %d",&n1,&n2);
	swap(n1,n2);
	return 0;
}
int swap(int a,int b)
{
	int r;
	a=a+b;
	b=a-b;
	a=a-b;
	printf("After swapping a=%d and b=%d",a,b);
	
}

#include<stdio.h>
void EvenOdd(int *n);
int main()
{
	int n,result;
	printf("Enter number:\n");
	scanf("%d",&n);
	EvenOdd(&n);
	
}
void EvenOdd(int *n)
{
	if(*n%2==0)
		printf("Number is even");
	else
		printf("Number is odd");
}

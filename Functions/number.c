#include<stdio.h>
#define EVEN 1
#define ODD 0
int EvenOdd(int number);//function declaration
int main()
{
	int n,result;
	printf("Enter number:\n");
	scanf("%d",&n);
	result=EvenOdd(n);
	if(result==1)
		printf("%d is an even number\n",n);
	else
		printf("%d is an odd number\n",n);
	return 0;
}
int EvenOdd(int number)
{
	
	if(number%2==0)
		return EVEN;
	else
		return ODD;
}

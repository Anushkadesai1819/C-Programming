#include <stdio.h>
#define EVEN 1
#define ODD 0
int EvenOdd(int number);//function prototype / function declaration

int main()
{
	int result,n;
	printf("Enter number:");
	scanf("%d",&n);
	result=EvenOdd(n);
	printf("Result is:%d",result);
	return 0;
}
int EvenOdd(int number)
{
	
	if(number%2==0)
		return EVEN;
	else
		return ODD;
	return number;

}

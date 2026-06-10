#include<stdio.h>
int fibo(int n);
int main()
{
	int i,n;
	printf("Enter number:\n");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
		printf("%d",fibo(i));
	return 0;
	
}
int fibo(int n)
{
	if(n==0 ||n==1)
		return 1;
	else
		return(fibo(n-1)+fibo(n-2));
}

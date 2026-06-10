//Write a function to calculate the Sum,Product and Average of 2 numbers. Print that all of them in the main function.
//by using pass by reference method
#include<stdio.h>
//function declaration
void SumProAvg(int a, int b,int *sum,int *pro,int *avg);
int main()
{
	int x,y,sum,pro,avg;
	printf("Enter two numbers:\n");
	scanf("%d %d",&x,&y);
	SumProAvg(x,y,&sum,&pro,&avg);
	printf("Sum=%d,Pro=%d,avg=%d",sum,pro,avg);
}
void SumProAvg(int a,int b,int *sum,int *pro,int *avg)
{
	*sum=a+b;
	*pro=a*b;
	*avg=(a+b)/2;
}

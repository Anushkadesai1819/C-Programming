#include<stdio.h>
//function declaration
 int powRe(int num,int n);

 int main()
{
	int result,a,n;
	printf("Enter the number and power:\n");
	scanf("%d %d",&a,&n);
	printf("%d ^ %d=%d",a,n,powRe(a,n));
	return 0;
}
int powRe(int num,int n)//function definition
{
	
	if(n==0)
		return 1;
	else
		return (num*powRe(num,n-1));	
}

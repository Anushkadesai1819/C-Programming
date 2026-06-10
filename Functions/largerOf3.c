#include <stdio.h>

int larger(int n1,int n2,int n3);//function declaration

int main()
{
	int result,n1,n2,n3;
	printf("Enter three numbers:\n");
	scanf("%d %d %d",&n1,&n2,&n3);
	result=larger(n1,n2,n3);
	printf("The largest number amng %d,%d and %d is:%d",n1,n2,n3,result);
	return 0;
}
int larger(int n1,int n2,int n3)//function definition
{
	if(n1>n2)
	{
		if(n1>n3)
			return n1;
		else
			return n3;
	}
	else if(n2>n3)
	{
		if(n2>n1)
			return n2;
		else
			return n1;
				
	}
	else
		return n3;
}

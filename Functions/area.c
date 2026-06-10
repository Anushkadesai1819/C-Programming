#include <stdio.h>
#include <math.h>
int area(int s);//function declaration
int main()
{	int a,s;
	printf("Enter side\n");
        scanf("%d",&s);
	a=area(s);
	printf("area is %d",a);
	return 0;
}
int area(int s)
{
	int a;
	a=pow(s,2);
	return a;
}

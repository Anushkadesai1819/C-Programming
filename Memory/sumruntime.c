#include<stdio.h>
#include<stdlib.h>
int main()
{
	float *ptr,sum=0;
	ptr=(float *) malloc(5*sizeof(float));
	ptr[0]=1.0;
	ptr[1]=2.0;
	ptr[2]=3.0;
	ptr[3]=4.0;
	ptr[4]=5.0;
	for(int i=0;i<=4;i++)
	{
		sum=sum+ptr[i];
		
	}
	printf("sum of all five numbers are:%f",sum);
}

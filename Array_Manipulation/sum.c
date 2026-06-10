#include<stdio.h>
int main()
{
	int sum=0;
	int arr[5]={1,2,3,4,5};
	for(int i=0;i<5;i++)
        {
                printf("Array is: %d\t",arr[i]);
        }

	for(int i=0;i<5;i++)
	{
		sum=sum+arr[i];
	}
	printf("\nSum is:%d",sum);
}

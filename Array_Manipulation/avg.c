#include<stdio.h>
int main()
{
        int avg=0,s=0;
        int arr[5]={1,2,3,4,5};
        for(int i=0;i<5;i++)
        {
                printf("Array is: %d\t",arr[i]);
        }

        for(int i=0;i<5;i++)
        {
                s=s+arr[i];
        }
	avg=s/5;
        printf("\naverage is:%d",avg);
}

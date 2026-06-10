#include<stdio.h>
int main()
{
    int sum=0;
    int arr[5]={1,2,3,4,5};
    printf("Find out which two numbers sum is 5\n");
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            if(arr[i]+arr[j]==5)
                printf("Those two numbers whose sum is 5 are:%d and %d\n",arr[i],arr[j]);
        }
    }
}

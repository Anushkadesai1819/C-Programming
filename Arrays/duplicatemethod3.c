#include<stdio.h>
#define size 7
int main()
{
    int arr[size]={1,2,3,4,5,6,5};
    int n=size-1,sum=0;
    for(int i=0;i<size;i++)
    {
        sum+=arr[i];
        printf("%d\n",sum);
    }
    
    int num=(n*(n+1))/2;
    int duplicate=sum-num;
    printf("Duplicate number is:%d",duplicate);
    
}

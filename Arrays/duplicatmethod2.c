#include<stdio.h>
#define size 7
int main()
{
    int arr[size]={1,2,3,4,6,5,4};
    int brr[size]={0};
    for(int i=0;i<size;i++)
    {
            if(brr[arr[i]]==1)
            {
                printf("duplicate element is:%d",arr[i]);
            }
            else
                brr[arr[i]]=1;
    }
}

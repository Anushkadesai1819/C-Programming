//bubble sorting
#include<stdio.h>
#define size 5
int main()
{
    int arr[size]={5,3,4,2,1};
    for(int i=0;i<size-1;i++)
    {
        for(int j=0;j<size-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                
            }
        }
    }
     printf("After sorting\n");
    for(int n=0;n<size;n++)
    {
        printf("%d\t",arr[n]);
    }
}

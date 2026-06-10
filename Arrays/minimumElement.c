#include<stdio.h>
#define size 5
int main()
{
    int arr[size]={3,4,2,1,0};
    printf("Array is\n");
    for(int i=0;i<size;i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\n");
    int min=arr[0];
    for(int i=0;i<size;i++)
    {
        
            if(arr[i]<min)
                min=arr[i];
    }
    printf("Minimum number in the given array is:%d",min);
}

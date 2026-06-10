#include<stdio.h>
void reverse(int arr[]);
void printarr(int arr[]);
int main()
{
    int arr[5],result;
    printf("Enter contents of an array:\n");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    printf("Below is the reverse order of array:\n");
    reverse(arr);
    printarr(arr);
}
void printarr(int arr[])
{
    for(int i=0;i<5;i++)
    {
        printf("%d\t",arr[i]);
    }
}
void reverse(int arr[])
{
    
    for(int i=0;i<5/2;i++)
    {
        int first=arr[i];
        int second=arr[5-i-1];
        arr[i]=second;
        arr[5-i-1]=first;
    }
printf("\n");
}

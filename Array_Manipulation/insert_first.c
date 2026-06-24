//insert an element at the beginning
#include<stdio.h>
int main()
{
    int arr[5]={2,3,4,5};
    int e;
    printf("Enter the element which you want to enter at the very first position:");
    scanf("%d",&e);
     for(int i=0;i<5;i++)
    {
        printf("%d\t",arr[i]);
    }
    for(int i=4;i>0;i--)
    {
        arr[i]=arr[i-1];
    }
    arr[0]=e;
    printf("\n---New Array---\n");
    for(int i=0;i<5;i++)
    {
        printf("%d\t",arr[i]);
    }
}

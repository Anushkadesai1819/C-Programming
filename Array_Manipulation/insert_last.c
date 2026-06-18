//insert an element at the last
#include<stdio.h>
int main()
{
    int arr[5]={2,3,4,5};
    int e;
    printf("Enter the element which you want to enter at the very last position:");
    scanf("%d",&e);
     for(int i=0;i<5;i++)
    {
        printf("%d\t",arr[i]);
    }
    arr[4]=e;
    printf("\n---New Array---\n");
    for(int i=0;i<5;i++)
    {
        printf("%d\t",arr[i]);
    }
}

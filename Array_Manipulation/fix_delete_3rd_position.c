//delete an element from 3rd position
#include<stdio.h>
int main()
{
    int size;
    printf("Enter the size of an array:");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the array:\n");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\nArray entered by you is:\n");
    for(int i=0;i<size;i++)
    {
        printf("%d\t",arr[i]);
    }
    for(int i=3;i<size;i++)
    {
        arr[i]=arr[i+1];
    }
    printf("\n---After deleting---\n");
     for(int i=0;i<size-1;i++)
    {
        printf("%d\t",arr[i]);
    }
}

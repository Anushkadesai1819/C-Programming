//update an element
#include<stdio.h>
int main()
{
    int size,position=0,updated_value=0;
    printf("Enter the size of an array:");
    scanf("%d",&size);
    int arr[size];
    printf("Enter an array:\n");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Array entered by you is:");
    for(int i=0;i<size;i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\nEnter the position where you want to update that:");
    scanf("%d",&position);
    printf("Now enter the updated value:");
    scanf("%d",&updated_value);
    
    arr[position]=updated_value;
    
    printf("\n---Updated Array---\n");
    for(int i=0;i<size;i++)
    {
        printf("%d\t",arr[i]);
    }
}

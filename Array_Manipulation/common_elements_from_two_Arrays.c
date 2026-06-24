//to print common elements
#include<stdio.h>
#define size 5
int main()
{
    
    int arr1[5]={1,2,3,4,5};
    int arr2[5]={1,2,13,4,5};
    int count=0;
    printf("---Array1---\n");
    for(int i=0;i<5;i++)
    {
        printf("%d\t",arr1[i]);
    }
    printf("\n---Array2---\n");
    for(int i=0;i<5;i++)
    {
        printf("%d\t",arr2[i]);
    }
    printf("\nCommon elements are:");
    for(int i=0;i<5;i++)
    {
        if(arr1[i]==arr2[i])
        {
            printf("%d\t",arr1[i]);
        }
       
    }
}

//to check whether two arrays are equal or not
#include<stdio.h>
#define size 5
int main()
{
    
    int arr1[5]={1,2,3,4,5};
    int arr2[5]={1,2,3,4,5};
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
    for(int i=0;i<5;i++)
    {
        if(arr1[i]==arr2[i])
        {
            count++;
        }
        else
        {
            count=0;
        }
    }
    if(count==size)
    {
       
        printf("\nBoth the arrays are equal");
    }
    else
    {
        
         printf("\nBoth the arrays are not equal");
    }
}

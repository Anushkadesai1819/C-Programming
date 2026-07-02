//merge two sorted arrays
#include<stdio.h>
int main()
{
    int size1,size2;
    printf("Enter the size of an array1:");
    scanf("%d",&size1);
    int arr1[size1];
    printf("\n---Enter the array---\n");
    for(int i=0;i<size1;i++)
    {
        scanf("%d",&arr1[i]);
    }
    printf("\n----Array entered by you is---\n");
    for(int i=0;i<size1;i++)
    {
        printf("%d\t",arr1[i]);
    }
    printf("\nEnter the size of an array2:");
    scanf("%d",&size2);
    int arr2[size2];
    printf("\n---Enter the array---\n");
    for(int i=0;i<size2;i++)
    {
        scanf("%d",&arr2[i]);
    }
    printf("\n----Array entered by you is---\n");
    for(int i=0;i<size2;i++)
    {
        printf("%d\t",arr2[i]);
    }
    //sort arr1
    for(int i=0;i<size1;i++)
    {
        for(int j=i+1;j<5;j++)
        {
            if(arr1[i]>arr1[j])
            {
                int tmp=arr1[i];
                arr1[i]=arr1[j];
                arr1[j]=tmp;
            }
        }
    }
    //sort arr2
    for(int i=0;i<size2;i++)
    {
        for(int j=i+1;j<5;j++)
        {
            if(arr2[i]>arr2[j])
            {
                int tmp=arr2[i];
                arr2[i]=arr2[j];
                arr2[j]=tmp;
            }
        }
    }
    printf("\n---sorted arr1---\n");
    for(int i=0;i<size1;i++)
    {
        printf("%d\t",arr1[i]);
    }
    printf("\n---sorted arr2---\n");
    for(int i=0;i<size2;i++)
    {
        printf("%d\t",arr2[i]);
    }
    int size=size1+size2;
    int merge[size];
    for(int i=0;i<size1;i++)
    {
        merge[i]=arr1[i];
    }
    int j=size1;
    for(int i=0;i<size2;i++)
    {
        merge[j]=arr2[i];
        j++;
    }
    printf("\n---Merged Array---\n");
    for(int i=0;i<size;i++)
    {
        printf("%d\t",merge[i]);
    }
    
}

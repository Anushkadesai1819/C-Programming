//reverse an array
#include<stdio.h>
int main()
{
    int arr[5]={1,2,3,4,5};
    int j=4;
    int arr1[5];
    for(int i=0;i<5;i++)
    {
            arr1[j]=arr[i];
            j--;
    }
    for(int i=0;i<5;i++)
    {
        arr[i]=arr1[i];
    }
     printf("\nReversed Array---\n");
    for(int i=0;i<5;i++)
    {
        printf("%d\t",arr[i]);
    }
}

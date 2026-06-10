#include<stdio.h>
int main()
{
    int j=4;
    int arr1[5]={1,2,3,4,5};
    int arr2[5];
    for(int i=0;i<5;i++)
    {
            arr2[i]=arr1[j];
            j--;
    }
    for(int i=0;i<5;i++)
    {
        printf("%d\t",arr2[i]);
    }
}

//right rotate array by 1 position.
#include<stdio.h>
int main()
{
    int arr[5]={1,2,3,4,5};
    printf("---Array is---\n");
    for(int i=0;i<5;i++)
    {
        printf("%d\t",arr[i]);
    }
    int tmp=arr[4];
    printf("\n---Right rotate array by 1 position---\n");
    for(int i=4;i>=1;i--)
    {
        
        arr[i]=arr[i-1];
    }
    arr[0]=tmp;
    for(int i=0;i<5;i++)
    {
        printf("%d\t",arr[i]);
    }
}

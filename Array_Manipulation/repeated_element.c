//find repeated element
#include<stdio.h>
int main()
{
    int arr[5]={1,4,3,3,4};
    printf("---Array is---\n");
    for(int i=0;i<5;i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\nRepeated element is:");
    for(int i=0;i<5;i++)
    {
        for(int j=i+1;j<5;j++)
        {
            if(arr[i]==arr[j])
            {
                printf("%d\t",arr[i]);
            }
        }
    }
}

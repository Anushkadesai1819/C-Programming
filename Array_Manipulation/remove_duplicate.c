//delete all the occurrence of the number
#include<stdio.h>
int main()
{
    int size,duplicate=0;
    printf("Enter the size of an array:");
    scanf("%d",&size);
    int arr[size];
    printf("\nEnter an array:\n");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Array Enter by you is:\n");
    for(int i=0;i<size;i++)
    {
        printf("%d\t",arr[i]);
    }
    for(int i=0;i<size;i++)
    {
        for(int j=i+1;j<size;j++)
        {
          
                  if(arr[i]==arr[j])
                {
                    for(int i=1;i<size;i++)
                    {
                        arr[j]=arr[j+1];
                    }
                     size--;
                     j--;
                }
        }
    }
    printf("\n---Array without duplicate elements---\n");
     for(int i=0;i<size;i++)
    {
        printf("%d\t",arr[i]);
    }
}

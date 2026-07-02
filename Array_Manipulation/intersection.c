//to find the intersection
#include<stdio.h>
int main()
{
    int arr1[5]={1,2,3,4,5};
    int arr2[5]={3,7,6,5,9};
    printf("---Intersection---\n");
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            if(arr1[i]==arr2[j])
            {
                    printf("%d\t",arr1[i]);
            }
        }
    }
}

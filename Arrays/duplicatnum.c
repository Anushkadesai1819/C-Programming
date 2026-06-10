#include<stdio.h>
#define size 7
int main()
{
    int arr[size]={1,2,3,4,5,3,6};
    for(int i=0;i<size;i++)
    {
        for(int j=i+1;j<=size;j++)
        {
            if(arr[i]==arr[j])
            {
            printf("Duplicate number is:%d\n",arr[i]);
            }
        }
    }
}

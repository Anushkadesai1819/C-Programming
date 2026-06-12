//find smallest element in an array 
#include<stdio.h>
int main()
{
    int arr[5]={1,2,3,5,4};
    for(int i=0;i<5;i++)
    {
        for(int j=i+1;j<5;j++)
        {
            if(arr[i]>arr[j])
            {
                int tmp=arr[i];
                arr[i]=arr[j];
                arr[j]=tmp;
            }
        }
    }
    printf("The largest element of an array is:%d",arr[0]);
}

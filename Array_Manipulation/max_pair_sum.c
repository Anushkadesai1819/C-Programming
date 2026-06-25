//Find maximum pair sum.
#include<stdio.h>
int main()
{
    int arr[5]={1,2,3,4,5};
    int previous_sum=0;
    int store_pair[2];
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            if((arr[i]+arr[j])>previous_sum)
            {
                previous_sum=arr[i]+arr[j];
                 store_pair[0]=arr[i];
                 store_pair[1]=arr[j];
                
            }
        }
    }
    printf("Maximum sum is:%d",previous_sum);
    printf("\nPair who gives the maximum sum is:%d+%d",store_pair[0],store_pair[1]);
}

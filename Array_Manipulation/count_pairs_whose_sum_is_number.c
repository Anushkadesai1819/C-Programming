//count pair whose sum equals given number.
#include<stdio.h>
int main()
{
    int number=6;
    int arr[5]={1,2,3,4,5};
    int count=0;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            if(arr[i]+arr[j]==number)
            {
                count++;
            }
        }
    }
    printf("There are total %d pairs whose sum is %d",count,number);
}

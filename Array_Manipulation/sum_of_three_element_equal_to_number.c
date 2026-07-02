//tripple pair whose sum equals given number.
#include<stdio.h>
int main()
{
    int number=5;
    int arr[5]={1,2,3,4,5};
    int count=0;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            for(int k=0;k<5;k++)
            {
                if(arr[i]+arr[j]+arr[k]==number)
                {
                    printf("%d and %d and %d\n",arr[i],arr[j],arr[k]);
                    count++;
                }
            }
        }
    }
    printf("\nThere are total %d pairs whose sum is %d",count,number);
}

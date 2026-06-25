//Find pair whose sum equals given number.
#include<stdio.h>
int main()
{
    int number=6;
    int arr[5]={1,2,3,4,5};
    printf("---Pair is given below:---\n");
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            if(arr[i]+arr[j]==number)
            {
                printf("%d and %d\n",arr[i],arr[j]);
            }
        }
    }
}

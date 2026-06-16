#include<stdio.h>
int main()
{
    int arr[5]={1,2,-3,5,4};
    int positive=0,negative=0;
    for(int i=0;i<5;i++)
    {
       if(arr[i]>0)
           positive++;
       else
        negative++;
    }
    printf("There are total %d positive numbers and %d negative numbers",positive,negative);
}

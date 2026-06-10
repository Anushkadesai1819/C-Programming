#include<stdio.h>
int main()
{
    int  arr[5]={11,23,2,21,20};
    int min=0,max=0;
    min=max=arr[0];
    for(int i=0;i<5;i++)
    {
        if(arr[i]<min)
            min=arr[i];
        else if(arr[i]>max)
            max=arr[i];
    }
    printf("min number is %d and maximum number is %d",min,max);
}

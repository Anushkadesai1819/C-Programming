//first occurrence of 2
#include<stdio.h>
int main()
{
    int arr[5]={5,3,2,1,2};
    for(int i=0;i<5;i++)
    {
        if(arr[i]==2)
        {
            printf("First occurrence of 2 is at:%d position",i);
            break;
        }
    }
    
}

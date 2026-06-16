//last occurrence of 2
#include<stdio.h>
int main()
{
    int arr[5]={5,2,3,2,1};
    for(int i=4;i>=0;i--)
    {
        if(arr[i]==2)
        {
           printf("Last occurrence of 2 is at %d position",i);
           break;
        }

    }
}

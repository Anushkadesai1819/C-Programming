#include<stdio.h>
int main()
{
    int arr[5]={1,-2,3,-4,5};
    for(int i=0;i<5;i++)
    {
        for(int j=i+1;j<5;j++)
        {
            if((arr[i]<0&&arr[j]>0))
            {
                int tmp=arr[i];
                arr[i]=arr[j];
                arr[j]=tmp;
            }
        }
    }
    printf("---Array that have all negative at right---\n");
    for(int i=0;i<5;i++)
    {
        printf("%d\t",arr[i]);
    }
}

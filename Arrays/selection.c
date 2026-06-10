#include<stdio.h>
#define size 5
int main()
{
    //00 01 02 03 04
    //03 04 02 05 01
    
    //1st pass
    //00 01 02 03 04
    //01 04 02 05 03
    
    //2nd pass
    //00 01 02 03 04
    //01 02 04 05 03
    
    //3rd pass
    //00 01 02 03 04
    //01 02 03 05 04
    
    //4th pass
    //00 01 02 03 04
    //01 02 03 04 05
    int arr[size]={3,4,2,5,1};
    for(int i=0;i<size-1;i++)
    {
        int IndexMin=i;
        for(int j=i+1;j<size;j++)
        {
            if(arr[j]<arr[IndexMin])
            {
                 IndexMin=j;
            }
        }
         int temp=arr[IndexMin];
                arr[IndexMin]=arr[i];
                arr[i]=temp;
    }
    printf("After sorting\n");
    for(int i=0;i<size;i++)
    {
        printf("%d\t",arr[i]);
    }
}

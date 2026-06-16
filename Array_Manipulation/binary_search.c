//finding 2 using binary search method
#include<stdio.h>
int main()
{
    int target=2;
    int arr[7]={1,4,2,3,6,5,7};
    int high=6,mid,low=0;
    for(int i=0;i<7;i++)
    {
        for(int j=i+1;j<7;j++)
        {
            if(arr[i]>arr[j])
            {
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for(int i=0;i<7;i++)
    {
        printf("%d\t",arr[i]);
    }
     while(low<=high)
    {
        int mid=(low+high)/2;
        if(arr[mid]==target)
        {
            printf("\n%d found at index %d after sorting the array", target, mid);
            break;
        }
        else if(arr[mid] < target)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
}

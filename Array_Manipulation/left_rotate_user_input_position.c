//Left rotate 
#include<stdio.h>
int main()
{
    int arr[5]={1,2,3,4,5};
    int position;
    int tmp[position];
    printf("Enter how many position do you want to rotate left?:");
    scanf("%d",&position);
    printf("---Original Array---\n");
    for(int i=0;i<5;i++)
    {
        printf("%d\t",arr[i]);
    }
     int j=0;
        for(int i=0;i<position;i++)
        {
           
           tmp[j]=arr[i];
            j++;
        }
    
    printf("\n---Debug---\n");
    for(int i=0;i<position;i++)
    {
        printf("%d\t",tmp[i]);
    }
    for(int i=0;i<5;i++)
    {
        arr[i]=arr[i+position];
        
    }
    int count=0;
    for(int i=5-position;i<5;i++)
    {
        arr[i]=tmp[count];
        count ++;
    }
     printf("\n---Rotate Array---\n");
     for(int i=0;i<5;i++)
    {
        printf("%d\t",arr[i]);
    }
}

#include<stdio.h>
int main()
{
    int i,even=0,odd=0,arr[5];
    for(i=0;i<5;i++)
    {
        printf("Enter element of arr[%d]\n",i);
        scanf("%d",&arr[i]);
        if(arr[i]%2==0)
            even+=1;
        else 
            odd+=1;
    }
    printf("Total even elements are %d and odd elements are %d",even,odd);
}

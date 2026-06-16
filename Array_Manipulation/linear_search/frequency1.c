//Count occurrences of a number.
#include<stdio.h>
int count=0;
int visited=0;
int main()
{
    int arr[5]={2,3,1,2,3};
    for(int i=0;i<5;i++)
    {
       for(int j=0;j<i;j++)//check if already visited or not
       {
           if(arr[i]==arr[j])
           {
               visited=1;
               break;
           }
       }
       if(visited==1)
       {
           continue;
       }
       for(int j=0;j<5;j++)
       {
            if(arr[i]==arr[j])
           {
               count++;
           }
       }
        printf("Occurence of %d is %d\n",arr[i],count);
        count=0;
    }
    printf("\n---Original Array---");
    for(int i=0;i<5;i++)
    {
        printf("\n%d\t ",arr[i]);
    }
}

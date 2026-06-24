//insert an element at 3rd position
#include<stdio.h>
int main()
{
   int size,e;
   printf("Enter the size of an array:");
   scanf("%d",&size);
   int arr[size];
   printf("\nEnter an array:");
   for(int i=0;i<size;i++)
   {
       scanf("%d",&arr[i]);
   }
   printf("\n---Array is---\n");
   for(int i=0;i<size;i++)
   {
       printf("%d\t",arr[i]);
   }
   printf("\nEnter which element do you want to insert at 3rd position:");
   scanf("%d",&e);
   for(int i=size;i>=3;i--)
   {
       arr[i+1]=arr[i];
   }
   arr[3]=e;
   printf("\n---Inserted Array---\n");
   for(int i=0;i<size;i++)
   {
       printf("%d\t",arr[i]);
   }
}

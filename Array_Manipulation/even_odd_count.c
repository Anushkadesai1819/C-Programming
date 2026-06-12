#include<stdio.h>
int main()
{
    int arr[5]={1,2,3,5,4};
    int count_even=0,count_odd=0;
    for(int i=0;i<5;i++)
    {
       if(arr[i]%2==0)
           count_even++;
       else
        count_odd++;
    }
    printf("There are total %d even numbers and %d odd numbers",count_even,count_odd);
}

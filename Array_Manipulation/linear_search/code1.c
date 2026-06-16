//finding 200 using linear search
#include<stdio.h>
int count=0;
int main()
{
    int arr[9]={2,8,14,32,66,100,104,400};
    for(int i=0;i<9; i++)
    {
        if (arr[i]==200)
        {
            printf("200 is found at arr[%d]",i);
            count=1;
            break;   
        }
    }
    if(count==0)
        printf("200 is not present in this array");
}

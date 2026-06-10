#include<stdio.h>
int main()
{
    int number,arr[15];
    printf("Enter a decimal number which you want to convert into binary:\n");
    scanf("%d",&number);
    int i=0;
    while(number>0)
    {
        arr[i]=number%2;
        number=number/2;
        i++;
    }
    printf("Binary number is:");
    for(int j=i-1;j>=0;j--)
    {
        printf("%d",arr[j]);
        
    }
}

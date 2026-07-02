//find the remaining number from 1 to n
#include<stdio.h>
int main()
{
    int n,num,found;
    printf("Enter the last number n:");
    scanf("%d",&n);
    int series[n];
    for(int i=0;i<n;i++)
    {
        series[i]=i+1;
    }
    printf("Enter the number till which you want to enter:");
    scanf("%d",&num);
    printf("---1 to n---\n");
    for(int i=0;i<n;i++)
    {
        printf("%d\t",series[i]);
    }
    int arr[num];
    int r_size=n-num;
    int result[r_size];
    printf("\n---Enter the array---\n");
    for(int i=0;i<num;i++)
    {
        scanf("%d",&arr[i]);
    }
     printf("\n---Array entered by you is---\n");
     for(int i=0;i<num;i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\n---Result---\n");
    for(int i=0; i<n; i++)
{
    for(int j=0; j<num; j++)
    {
        if(series[i]==arr[j])
        {
            found=1;
            break;
        }
    }
    if(found==1)
    {
        for(int k=i;k<n-1;k++)
        {
            series[k]=series[k+1];
        }
        n--;
        i--;
    }
}
for(int i=0;i<n;i++)
    {
        printf("%d\t",series[i]);
    }
}

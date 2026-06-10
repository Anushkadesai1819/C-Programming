#include<stdio.h>
int main()
{
    int a[2][10];
    int i,j;
    for(j=0;j<10;j++)
    {
        a[0][j]=2*(j+1);
    }
    for(j=0;j<10;j++)
    {
        a[1][j]=3*(j+1);
    }
    for(i=0;i<2;i++)
    {
        for(j=0;j<10;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
}

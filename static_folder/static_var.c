#include<stdio.h>
int sum(int a,int b);
int main()
{
    
    printf("Sum =%d\n",sum(5,3)); 
}
int sum(int a,int b)
{
    int ret;
    static int c;
    printf("value of c before is %d\n",c);
    c++;
     printf("value of c after is %d\n",c);
    int sum=a+b+c;
    return sum;
}

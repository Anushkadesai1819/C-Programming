#include<stdio.h>
void sumptr(int a,int b,int *sum);
int main()
{
    int n1,n2,s;
    printf("Enter two numbers:\n");
    scanf("%d %d",&n1,&n2);
    sumptr(n1,n2,&s);
    printf("Sum of %d and %d is:%d",n1,n2,s);
}
void sumptr(int a,int b,int *sum)
{
     *sum=a+b;
    
}

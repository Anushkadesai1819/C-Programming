#include<stdio.h>
void maximum(int num1,int num2,int *maxptr);
int main()
{
    int n1,n2,maxnum;
    printf("Enter two numbers:\n");
    scanf("%d %d",&n1,&n2);
    maximum(n1,n2,&maxnum);
    printf("Maximum number is:%d",maxnum);
    
}
void maximum(int num1,int num2,int *maxptr)
{
   
    if(num1>num2)
    {
       // printf("%d is maximum",num1);
        *maxptr=num1;
    }
    else
    {
       //  printf("%d is maximum",num2);
        *maxptr=num2;
    }
} 

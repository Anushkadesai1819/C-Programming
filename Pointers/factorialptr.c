#include<stdio.h>
void factorial(int number,int *factptr);
int main()
{
    int num,factptr;
    printf("Enter number:\n");
    scanf("%d",&num);
    factorial(num,&factptr);
    printf("Factorial of is:%d",factptr);
    
}
void factorial(int number,int *factptr)
{
    int i;
    *factptr=1;
    for(i=1;i<=number;i++)
    {
        *factptr=(*factptr)*i;
    }
}

#include<stdio.h>
int main()
{
    char str[]="Hello World";//One method to store a string
    char str1[]={'H','e','l','l','o',' ','W','o','r','l','d','\0'};
    printf("string stored inside str is:%s\n",str);
    printf("string stored inside str1 is:%s\n",str1);
    printf("\n");
    printf("------ Address of each character ------\n");
    for(int i=0;i<sizeof(str);i++)
    {
        printf("%u\t",&str[i]);
    }
    printf("\n");
    for(int i=0;i<sizeof(str1);i++)
    {
        printf("%u\t",&str1[i]);
    }
}

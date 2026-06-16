#include<stdio.h>
#include<string.h>
int main()
{
    char str1[]="Hello";
    char str2[]="World";
    printf("The length of str1=%d and str2= %d\n",strlen(str1),strlen(str2));
    strcpy(str1,str2);
    printf("After using strcpy str1=%s and str2=%s\n",str1,str2);
    printf("After concatinating two strings string will become:%s\n",strcat(str1,str2));
}

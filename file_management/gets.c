#include<stdio.h>
int main()
{
	FILE *ptr;
	ptr=fopen("file.txt","r");
	char str[30];
	fgets(str,30,ptr);
	printf("From file i read :%s",str);
}

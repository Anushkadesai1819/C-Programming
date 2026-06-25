#include<stdio.h>
int main()
{
	FILE *ptr=NULL;
	ptr=fopen("/home/anushka/hello.txt","r");
	char ch=fgetc(ptr);
	printf("I read character :%c",ch);
	fclose(ptr);
}

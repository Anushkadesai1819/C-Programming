#include<stdio.h>
int main()
{
	FILE *ptr;
	ptr=fopen("file.txt","r");
	char ch=fgetc(ptr);
	printf("Character i read is:%c",ch);
}

#include<stdio.h>
int main()
{
	FILE *ptr;
	ptr=fopen("file.txt","w+");
	char str[10];
	fputs("HELLO WORLD",ptr);
	fclose(ptr);
}

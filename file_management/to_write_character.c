#include<stdio.h>
int main()
{
	FILE *ptr;
	ptr=fopen("/home/anushka/hello.txt","w");
	char ch=fputc('A',ptr);
	fclose(ptr);
}

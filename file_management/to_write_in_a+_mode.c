#include<stdio.h>
int main()
{
	FILE *ptr;
	ptr=fopen("/home/anushka/hello.txt","a+");
	char ch=fputc('A',ptr);
	char str[30];
	rewind(ptr);
	while(fgets(str,30,ptr)!=NULL)
	{
		printf("After using a+ whole string is :%s",str);
	}
	fclose(ptr);
}

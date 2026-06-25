#include<stdio.h>
int main()
{
	FILE *ptr;
	ptr=fopen("/home/anushka/hello.txt","r");
	char str[20];
	fgets(str,20,ptr);
	printf("string is: %s",str);	
	fclose(ptr);
}

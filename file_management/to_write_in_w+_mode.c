#include<stdio.h>
int main()
{
	FILE *ptr;
	ptr=fopen("/home/anushka/hello.txt","w+");
	char ch=fputc('Q',ptr);
	rewind(ptr);
	printf("after using w+ i am getting ch=%c",ch);
	fclose(ptr);
}

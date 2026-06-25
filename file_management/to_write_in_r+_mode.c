#include<stdio.h>
int main()
{
	FILE *ptr;
	ptr=fopen("/home/anushka/hello.txt","r+");
	char ch=fputc('H',ptr);
	rewind(ptr);//to bring the cursor at the very beginning of the file 
	char str[20];
	fgets(str,20,ptr);
	printf("Read file after writing using r+ mode:%s",str);
	fclose(ptr);
}

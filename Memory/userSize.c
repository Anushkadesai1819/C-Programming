//WAP to allocate memory of size n, where n is entered by the user.
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *ptr,size;
	printf("Enter the isize which you want to allocate memory:\n");
	scanf("%d",&size);
	ptr=(int *) calloc(size,sizeof(int));
	for(int i=0;i<size;i++)
	{
		printf("value is:%d\n",ptr[i]);
	}
}

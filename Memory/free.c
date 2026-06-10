#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *ptr,size;
	printf("Enter the size which you want to allocate memory:\n");
	scanf("%d",&size);
	ptr=(int *) calloc(size,sizeof(int));
	for(int i=0;i<size;i++)
	{
		printf("value is:%d\n",ptr[i]);
		printf("Address is:%p\n",&ptr[i]);
	}
	free(ptr);
	printf("--------------------\n");
	printf("After using free()\n");
	ptr=(int *) calloc(3,sizeof(int));
	 for(int i=0;i<3;i++)
        {
                printf("value is:%d\n",ptr[i]);
                printf("Address is:%p\n",&ptr[i]);
        }
}

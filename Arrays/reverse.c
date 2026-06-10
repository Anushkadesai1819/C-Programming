#include<stdio.h>
int main()
{
	int arr[5]={1,2,3,4,5};
	printf("Reverse element is:");
	for(int i=4;i>=0;i--)
	{
		printf("%d\t",arr[i]);
	}
}

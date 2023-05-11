#include <stdio.h>
int main()
{
	int arr[10],size,i;
	printf("enter the size of the array:");
	scanf("%d",&size);
	printf("enter the elements in the array ");
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
		printf(arr[i]);
	}
	
}
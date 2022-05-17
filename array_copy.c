//copying one array to another array

#include<stdio.h>

void main()
{
	int arr1[] = {11,12,13,14,15},arr2[5],i;
	int len=sizeof(arr1)/sizeof(arr1[0]);

	
	for(i=0;i<len;i++)
	{
		printf("%d\t",arr1[i]);
	}
	
	printf("\n");
	for(i=0;i<len;i++)
	{
		arr2[i] = arr1[i];
	}

	printf("Copying one array to another array\n\n");
	for(i=0;i<len;i++)
	{
		printf("%d\t",arr2[i]);
	}
	printf("\n");
	
}
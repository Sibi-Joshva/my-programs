// create a array 

#include<stdio.h>

void main()
{
	int arr[5];
	int i;
	
	printf("Enter the array elements : \n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}

	printf("--------------------------------------------------------------------\n");
	for(i=0;i<5;i++)
	{
		printf("%d\n",arr[i]);
	}
	printf("\n");
}
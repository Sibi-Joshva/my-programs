// add the all elements in array

#include<stdio.h>

void main()
{
	int arr[5],i,sum=0;
	printf("Enter the elements : \n");

	for(i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("---------------------------------------\n");

	for(i=0;i<5;i++)
	{
		printf("%d\n",arr[i]);
	}

	printf("Sum of all elements\n");
	for(i=0;i<5;i++)
	{
		 sum+=arr[i];
	}
	printf("answer : %d\n",sum);
}
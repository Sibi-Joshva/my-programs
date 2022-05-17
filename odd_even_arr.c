//check the array elements is even or odd

#include<stdio.h>

void main()
{
	int arr[] = {12,13,24,35,46,57,76,67,89}, i , even_count = 0,odd_count = 0;
	int len = sizeof(arr)/sizeof(arr[0]);
	int even[10],odd[20];


	printf("the given array is :\n");
	for(i=0;i<len;i++)
	{
		printf("%d\t",arr[i]);
	}

	printf("\n");

	for(i=0;i<len;i++)
	{
		if(arr[i]%2 == 0)
		{
			even_count++;
		}
		else
		{
			odd_count++;
		}
	}

	printf("total number of even number is : %d\n",even_count);
	printf("total number of odd number is : %d\n",odd_count);

	for(i=0;i<len;i++)
	{
		if(arr[i]%2 == 0)
		{
			 even[i]=arr[i];
		}
		else
		{
			odd[i]=arr[i];
		}
	}
	printf("---------- even numbers ---------\n");
	for(i=0;i<10;i++)
	{
		printf("%d\t",even[i]);
	}

	printf("\n");
	printf("---------- odd numbers ----------\n");
	for(i=0;i<10;i++)
	{
		printf("%d\t",odd[i]);
	}

	printf("\n");

}
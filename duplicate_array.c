//check the duplicate element in an array

#include<stdio.h>

void  duplicate(int arr[],int l)
{
	int arr2[50],count=0;
	for(int i=0;i<l;i++)
	{
		arr[i]=arr2[i];
	}

	for(int i=0;i<l;i++)
	{
		for(int j=0;j<l;j++)
		{
			if(arr[i]==arr2[j])
			{
				printf("same\n");
				count++;
			}
		}

	}
	printf("Total duplicate elements are : %d\n",count);
}

void main()
{
	int arr[] = {12,21,23,12,12,87,98},i;
	int len = sizeof(arr)/sizeof(arr[0]);
	
	printf("Given array is \n");
	for(i=0;i<len;i++)
	{
		printf("%d\t",arr[i]);
	}
	printf("\n\n");

	duplicate(arr,len);

	

}
//reverse a given array

#include<stdio.h>

int reverse(int arr[], int l)
{
	printf("\n----------reversed array----------\n");
	for(int i=l-1;i>=0;i--)
	{
		printf("%d\t",arr[i]);
	}
	printf("\n");
	return 0;
}

void main()
{
	int arr[] = {1,2,3,4,5}, i;
	int len = sizeof(arr)/sizeof(arr[0]);

	for(i=0;i<len;i++)
	{
		printf("%d\t",arr[i]);
	}

	reverse(arr,len);
	
}
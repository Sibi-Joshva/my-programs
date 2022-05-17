#include<stdio.h>

void main()
{
	int arr1[2][2] = {{1,2},{3,4}},i,j;
	int arr2[2][2] = {{3,4},{2,4}};
	int ans[2][2];

	printf("first matrix\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d\t",arr1[i][j]);
		}
		printf("\n");
	}

	printf("second matrix\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d\t",arr2[i][j]);
		}
		printf("\n");
	}

	printf("*******  Addition of matrix  *******\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			ans[i][j] = arr1[i][j]+arr2[i][j];
		}
		
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d\t",ans[i][j]);
		}
		printf("\n");
	}

}
#include<stdio.h>

void main()
{
	int a[2][2] = {{2,3},{3,4}};
	int b[2][2] = {{5,1},{2,8}};
	int c[2][2],i,j;

	printf("FIRST MATRIX\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d\t",a[i][j]);
		}			
		printf("\n");
	}
	printf("SECOND MATRIX\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d\t",b[i][j]);
		}			
		printf("\n");
	}

	printf("-------subraction of matries-------\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			c[i][j]=a[i][j]-b[i][j];
		}			
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d\t",c[i][j]);
		}			
		printf("\n");
	}

}
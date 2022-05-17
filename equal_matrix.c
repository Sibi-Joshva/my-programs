#include<stdio.h>

void main()
{
	int m1[2][2] = {{1,4},{1,2}};
	int m2[3][3] = {{1,3},{1,2}};

	int i,j,isequal;

	printf("martix 1 : \n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d\t",m1[i][j]);
		}
		printf("\n");
	}

	printf("martix 2 : \n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d\t",m2[i][j]);
		}
		printf("\n");	
	}

	//i assign isequal is 1 when isequal change into 0 its not equal

	isequal=1;

	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			if(m1[i][j] != m2[i][j])
			{
				isequal=0;
				//when i check row and col in m1 & m2 if its not equal im assign isequal into 0 
			}	
		}
	}

	if(isequal==1)
	{
		printf("the given matrix is equal \n");
	}
	else
	{
		printf("the given matrix is not equal\n");
	}

}
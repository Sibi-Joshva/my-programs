//find greatest of three numbers

#include<stdio.h>

void main()
{
	int v1,v2,v3;
	printf("Enter the values : ");
	scanf("%d%d%d",&v1,&v2,&v3);

	if(v1>v2)
	{
		if(v1>v3)
		{
			printf("%d is greater\n",v1);
		}
	}
	else if(v2>v3)
	{
		printf("%d is greater \n",v2);
	}
	
	else
	{
		printf("%d is greater \n",v3);
	}
}
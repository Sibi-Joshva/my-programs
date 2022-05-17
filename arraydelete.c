#include<stdio.h>
void main()
{
	int a[50],n,c,i;
	
	printf("how many values want to get :");
	scanf("%d",&n);

	printf("enter the %d element \n",n);

	for(i=0;i<n;++i)
	{
		scanf("%d",&a[i]);
	}

	printf("*********************************************\n");
	printf("number wants to delete : ");
	scanf("%d",&c);
	
	if (c>=n)
	{
		printf("invaild\n");
	}
	
	else
	{
		for (i=c-1;i<n;i++)
		{
			a[i]=a[i+1];
		}
		n--;
		printf("final output is :\n");
		
		for(i=0;i<n;i++)
		{
			printf("%d\n",a[i]);
		}
	}
}
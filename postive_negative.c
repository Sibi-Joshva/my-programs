//chech the number whether the number is positive or negative

#include<stdio.h>

void main()
{
	int x;
	printf("enter the value : ");
	scanf("%d",&x);

	if(x<1)
	{
		printf("%d is negative number\n",x);
	}
	else if(x>1)
	{
		printf("%d is positive number\n",x);
	}
	else
	{
		printf("the number is zero");
	}

}
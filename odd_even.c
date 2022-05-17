//check the number is odd or even

#include<stdio.h>
void main()
{
	int x;
	printf("enter the value : ");
	scanf("%d",&x);

	if(x%2==0)
	{
		printf("%d is even\n",x);
	}
	else
	{
		printf("%d is odd\n",x);
	}
}
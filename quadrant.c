//find the graph plotting quardrant

#include<stdio.h>
void main()
{
	int x,y;
	printf("X axis is : ");
	scanf("%d",&x);
	printf("Y axis is : ");
	scanf("%d",&y);

	if(x>0 && y>0)
	{
		printf(" x and y axis is 1'st quardrant\n");
	}
	else if(x<0 && y>0)
	{
		printf("x and y axis is 2'nd quardrant\n");
	}
	else if(x<0 && y<0)
	{
		printf("x and y axis is 3'nd quardrant\n");
	}
	else
	{
		printf("x and y is 4'th quardrant\n");
	}	
}
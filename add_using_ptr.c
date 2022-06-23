#include<stdio.h>

void main()
{
	int x,y,ans;
	int *ptr1,*ptr2,*sol;

	printf("enter the x value : ");
	scanf("%d",&x);

	printf("enter the y value : ");
	scanf("%d",&y);

	ptr1 = &x;
	ptr2 = &y;
	sol  = &ans;

	*sol = *ptr1 + *ptr2;

	printf("the answer is : %d\n",ans);

}
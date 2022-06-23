#include<stdio.h>

void main()
{
	int a=10;
	int *p1,*p2;

	p1 = &a;
	p2 = &a;

	*p1 = 20;
	printf("%d the value of a in 1'st deref\n",a);

	*p2 = 30;
	printf("%d the value of a in 2'st deref\n",a);

/* If we have more than one pointer pointing to the same location, 
then the change made by one pointer will be the same as another point*/

}
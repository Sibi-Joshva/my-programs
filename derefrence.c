#include<stdio.h>

void main()
{
	int a=10;
	int *p1,*p2;

	p1 = &a;

	printf("%d is the value of a in p1 \n",*p1);

	int y;
	y = *p1;
	*p1 = 11;

	printf("%d is the value of a in p1 after derefrencing\n",*p1);

	/*We assign the value of 'x' to 'y' with the help of 'pointer' variable, 
	i.e., y=*p1 instead of using the 'x' variable.
	*/
}
#include <stdio.h>

void main()
{
	int a=10;
	int *p;
	p = &a;

	printf("Address of p : %u\n",p);
	printf("value in p is : %d\n",*p);	// we want to print a value in a pointer use (*pointer_variable_name)

	

}
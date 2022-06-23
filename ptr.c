#include<stdio.h>

void main()
{
	int a = 1025;//
	int *p;

	p=&a;

	printf("address of a variable is %x\n",&a);//%x is a specifier which is denoted hexadeciaml value address
	//%p is a specifier which is used to print pointer address

	printf("%d size of integer\n",sizeof(int));
	printf("%x is the address\n%d is the value \n",p,*p);

	char *ptr;

	ptr=(char *)p;//typecast p to char pointer

	printf("%d size of char\n",sizeof(char));
	printf("%x is the address\n%d is the value \n",ptr,*ptr);
}
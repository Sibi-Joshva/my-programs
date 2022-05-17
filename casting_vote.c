//check the candidate age is eligible for vote

#include<stdio.h>

void main()
{
	int age;
	printf("candidate age for casting his/ her own vote : ");
	scanf("%d",&age);

	if(age>18)
	{
		printf("congratulation !.. you are eligible for cast your own vote \n");
	}
	else
	{
		printf("oops!!!... you are not eligible\n");
	}
}
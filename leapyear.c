#include<stdio.h>
void main()
{
	int a;
	printf("enter the year : ");
	scanf("%d",&a);
	
//the year is perfecty divisible by 400
	if((a%400)==0)
	{
		printf("%d the year is leap year\n",a);
	}

//or else the year is not divisible by 100
	else if(a%100 == 0)
	{
		printf("%d year is not leap year\n",a);
	}

//else the year is divisible by 4
	else if (a%4  == 0)
	{
		printf("%d year is leap year\n",a);
	}
	else
	{
		printf("%d year is not a leap year",a);
	};
};
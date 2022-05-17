#include<stdio.h>

void main()
{
	char str[4] = "sibi";
	int i = 0;
	while(str[i]!= '\0')
	{
		printf("%c\n",str[i]);
		i++;
	}
	printf("\n");
}
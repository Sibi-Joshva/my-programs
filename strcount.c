-include<stdio.h>

void main()
{
	char str[50];
	int i,count=0;

	printf("Enter the string : ");
	scanf("%s",str);

	for(i=0;str[i]!='\0';i++)
	{
		count++;
	}
	printf("total count of string is : %d\n",count);
}
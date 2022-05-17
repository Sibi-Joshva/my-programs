//check the peron's age and categorize a person according to his age


#include<stdio.h>

void main()
{
	int height,person;
	int p_count=1;

	printf("How many person's want's : ");
	scanf("%d",&person);

	for(int i=0;i<person;i++)
	{
		printf("person %d : ",p_count);
		scanf("%d",&height);
		p_count++;

		if(height<150)
		{
			printf("person's height is dwarf\n");
		}
		else if(height==150)
		{
			printf("person's height is average\n");
		}
		else
		{
			printf("he/she is tall\n");
		}
		printf("\n");
	}
}
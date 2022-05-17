//check the student mark eligible for admission or not

#include<stdio.h>
#include<string.h>

void main()
{
	char std_name[50];
	int maths,physics,chemistry,total,total2;

	printf("Enter student name : ");
	scanf("%s",std_name);

	printf("Mark in maths : ");
	scanf("%d",&maths);

	printf("Mark in physics : ");
	scanf("%d",&physics);

	printf("Mark in chemistry : ");
	scanf("%d",&chemistry);

	total = maths+physics+chemistry;
	printf("Total in all subject : %d\n",total);

	total2 = maths+physics;
	printf("total in maths and physics : %d\n",total2);


	if(total>=190 && total2>=140 && maths>=65 && physics>=55 && chemistry>=50)
	{
		printf("student is eligible for admission\n");
	}
	else
	{
		printf("student is not eligible for admission\n");
	}
}
#include<stdio.h>

void main()
{
    int stud , teams , team_mem , leftout;

    printf("Enter the number of student in the class \n");
    scanf("%d",&stud);

    printf("Enter the number of teams\n");
    scanf("%d",&teams);

    team_mem = stud / teams;
    leftout  = stud % teams;

    printf("The number of students in each team is %d and the number of students left out is %d\n",team_mem,leftout);
}
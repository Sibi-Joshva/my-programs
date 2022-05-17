#include <stdio.h>
#include<string.h>


struct student{

    char name[20];
    int regno;
    int lang1;
    int lang2;
    int math;
    int physics;
    int chemistry;
    int biology;
    int total;
    int avg;
    char result;
    int engg_cutoff;
    int med_cutoff;

};

void main()
{

    struct student stud[100];

    int i,n;

    printf("ENTER THE NUMBER OF STUDENTS:  ");

    scanf("%d",&n);

	/* Input Student Details */

	printf("____________________________________________________\n\n");


	    printf("Student whose Result is P has Passed the Course\n\n");
	    printf("Student whose Result is F has Failed the Course\n\n");
	    printf("Student whose Result is E has passed \n");
	    printf("and eligible for Engineering admission\n\n");
	    printf("Student whose Result is M has passed\n");
	    printf("and eligible for Medical admission \n\n");

	printf("____________________________________________________\n\n");

	printf("----------------ENTER STUDENT DETAILS---------------\n\n");

	for(i=0;i<n;i++)
	{

	    printf("ENTER STUDENT NAME:");
	    scanf("%s",stud[i].name);

	    printf("ENTER STUDENT REGISTRATION NUMBER:");
	    scanf("%d",&stud[i].regno);

	    printf("ENTER FIRST LANGUAGE MARKS:");
	    scanf("%d",&stud[i].lang1);

	    printf("ENTER SECOND LANGUAGE MARKS:");
	    scanf("%d",&stud[i].lang2);

	    printf("MATH:");
	    scanf("%d",&stud[i].math);

	    printf("PHYSICS:");
	    scanf("%d",&stud[i].physics);

	    printf("CHEMISTRY:");
	    scanf("%d",&stud[i].chemistry);

	    printf("BIOLOGY:");
	    scanf("%d",&stud[i].biology);

	    printf("\n\n");

	}

	/* Student Results, Total Marks, Average Marks */

	for(i=0;i<n;i++)
	{

	    if(stud[i].lang1 < 50 || stud[i].lang2 < 50 || stud[i].math < 50 || stud[i].physics < 50 || stud[i].chemistry < 50 || stud[i].biology < 50)
	    {

	        stud[i].result = 'F';

	    }
	    else
	    {

	        stud[i].result = 'P';

	    }
	}

	for(i=0;i<n;i++)
	{

	    stud[i].total = 0;

	    stud[i].avg = 0;

	    stud[i].total = stud[i].lang1 + stud[i].lang2 + stud[i].math + stud [i].physics + stud[i].chemistry + stud[i].biology;

	    stud[i].avg = stud[i].total/6;

	}

	/* Print Student Information */

	printf("_______________________________________________________________________________________\n\n");

	printf("NAME\tREGNO\tLANG-1\tLANG-2\tMATH\tPHY\tCHEM\tBIO\tTOTAL  AVG  RESULT\n\n");

	printf("________________________________________________________________________________________\n\n");

	for(i=0;i<n;i++)
	{

	    printf("%s\t%d\t%d\t%d\t%d\t%d\t%d\t%d\t%d\t%d\t%c\n\n",stud[i].name,stud[i].regno,stud[i].lang1,stud[i].lang2,stud [i].math,stud[i].physics,stud[i].chemistry,stud[i].biology,stud [i].total,stud[i].avg,stud[i].result);
	}


	printf("*****************************************************************************\n\n");

	/* Compute Engineering and Medical Cutoff Marks */

	for( i=0;i<n;i++) 
	{ 

		stud[i].engg_cutoff = (stud[i].math)/2 + (stud[i].physics)/4 + (stud [i].chemistry)/4; 

		stud[i].med_cutoff = (stud[i].math)/2 + stud [i].biology/4 + (stud[i].chemistry)/4; 

		stud[i].engg_cutoff = stud [i].engg_cutoff + stud[i].lang1 + stud[i].lang2; 

		stud[i].med_cutoff = stud[i].med_cutoff + stud[i].lang1 + stud[i].lang2; 

	    if(stud[i].engg_cutoff >= 220 && stud[i].med_cutoff < 230 ) 
	    { 

	        stud[i].result = 'E'; 

	    }
	    else if(stud[i].med_cutoff >= 230)
	    {

	        stud[i].result = 'M';

	    }

	}

	/* Print Student Results and Eligibility */

	printf("Name\tTotal\tResult\tMedCutOff  Engg_CutOff\n\n");

	printf("______________________________________________\n\n");

	for(i=0;i<n;i++)
	{

	    printf("%s\t%d\t%c\t%d\t%d\t\n\n",stud[i].name,stud[i].total,stud [i].result,stud[i].med_cutoff,stud[i].engg_cutoff);

	}

}	
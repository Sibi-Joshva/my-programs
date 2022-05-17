//fibanocci series

#include<stdio.h>

void main()
{
	int n1=0, n2=1 , n3 , num;

	printf("Give value : ");
	scanf("%d",&num);
	printf("%d\t%d\t",n1,n2);

	for(int i=1;i<=num;i++)
	{
		n3 = n1+n2;
		printf("%d\t",n3);
		n1 = n2;
		n2 = n3;
	}
	printf("\n");

}
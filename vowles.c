#include<stdio.h>
void main()
{
	char ch;
	char letter;
	//printing alphabets

	for(ch = 'a';ch<='z';ch++)
	{
		printf("%c\t",ch);
	}printf("\n");
	printf("=======================================================\n");
	
	//vowel checking

	printf("\ntype the letter : ");
	scanf("%c",&letter);
			//z
	switch(letter)
	{
		case 'a':
			printf("%c is vowel",letter);
			break;

		case 'e':
			printf("%c is vowel",letter);
			break;
		
		case 'i':
			printf("%c is vowel",letter);
			break;	
		
		case 'o':
			printf("%c is vowel",letter);
			break;
		
		case 'u':
			printf("%c is vowel",letter);
			break;
		
		default:
			printf("%c is consonent",letter);
	}
	printf("\n");
}
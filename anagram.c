//check the given str is anagram or not


#include<stdio.h>
#include<string.h>

void main()
{
	char str1[]="eat";
	char str2[]="ase";
	int count = 0;

	int len1 = strlen(str1);
	int len2 = strlen(str2);

	if(len1 == len2)
	{
		for(int i=0;i<len1;i++)
		{
			for(int j=0;j<len2;j++)
			{
				if(str1[i]==str2[j])
				{
					str2[j] = '*';
					count++;
					break;
				}
			}
		}

		if(count==len1)
		{
			printf("the given strings are anagram\n");
		}
		else
		{
			printf("the given strings are not an anagram\n");
		}
	}
	else
	{
		printf("the given strings are not an anagram\n");
	}
}
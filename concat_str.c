#include<stdio.h>

void main()
{
    char s1[20], s2[20];
    int i ,j;

    scanf("%s%s",s1,s2);

    i = 0;
    while(s1[i] != '\0')
    {
        i++;
    }
    j=0;
    while(s2[j] != '\0')
    {
        s1[i] = s2[j];
        i++;
        j++;
    }
    s1[i] = '\0';

    printf("%s\n",s1);

}


#include<stdio.h>
#include<string.h>


char isAlphabet(int len,char str[])
{
    char rev;
    for(int i=len-1;i>=0;i--)
    {
        rev = str[i];
    }
    return rev;
}

void main()
{
    char str[] = "sibi";
    char result;
    int len;

    len = strlen(str);

    result = isAlphabet(len, str);
    
}
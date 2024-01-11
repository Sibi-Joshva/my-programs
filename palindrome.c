#include <stdio.h>
#include <string.h>
#include <stdbool.h>

void display(char s[], int sl)
{
    for (int i=0; i<sl; i++)
    {
        printf("%c",s[i]);
    }
    printf("\n");
}
bool is_alpha(char c)
{
    return ('A'<=c && c<='Z') || ('a'<=c && c<='z');
}

void swap(char s[], int i, int j){
    char tmp;
    tmp = s[i]; 
    s[i] = s[j]; 
    s[j] = tmp;
}
void reverse(char s[], int sl)
{
    int i=0, j=sl-1;
    char tmp;
    while(i<j)
    {
        swap(s,i++,j--);
    }
}

void sprev(char s[], int sl)
{
    int i=0, j=sl-1; char tmp;
    while(i<j)
    {
        if (is_alpha(s[i]) && is_alpha(s[j]))
        { 
            swap(s,i,j); 
            i++; 
            j--;
        }
        if (!is_alpha(s[i]))
        { 
            i++; 
        }
        if (!is_alpha(s[j]))
        { 
            j--; 
        }
    }
}

void main()  
{
    char str[] = {'a','@','b','c','1'};
    int sl = strlen(str);

    display(str,sl);
    sprev(str,sl);
    display(str,sl);
}

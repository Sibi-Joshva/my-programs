//time complexity of bubble sort is o[n^2]


#include<stdio.h>

void display(int n[], int l)
{
    for(int i=0;i<l;i++)
    {
        printf("%d\t",n[i]);
    }
}
void sort(int n[],int l)
{
    int i ,j, temp;
    for(i=0;i<l;i++)
    {
        for(j=1;j<l;j++)
        {
            if(n[i]>n[j])
            {
                temp = n[i];
                n[i]=n[j]; 
                n[j]=temp;
            }
        }        
   }
}

void main()
{
    int val[] = {56,34,23,33,67,54,43};
    int len = sizeof(val)/sizeof(val[0]);

    printf("========================== before bubble sort ======================\n");
    display(val,len); 
    printf("\n");
    printf("========================== after bubble sort ======================\n");
    sort(val,len);
    display(val,len);
    printf("\n");
}
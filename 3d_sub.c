#include<stdio.h>

void main()
{
    int arr1[3][3][3], arr2[3][3][3];
    int i,j,k;

    printf("Get values from the user \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            for(k=0;k<3;k++)
            {
                scanf("%d\t",&arr1[i][j][k]);
            }
        }
    }

    //printf("");
}
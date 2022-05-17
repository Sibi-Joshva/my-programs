#include<stdio.h>

void main()
{
    int arr[] = {4,7,6,5,5,4,3,4,7,3,4};
    int i,j,count=0;
    int len = sizeof(arr)/sizeof(arr[0]);

    for(i=0;i<len;i++)
    {
        for(j=i;j<len;j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
            }
        }
        printf("%d no of occurenence %d\n",arr[i],count);
        count = 0;        
    }
}
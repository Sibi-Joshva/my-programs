#include<stdio.h>

void main()
{
    int arr[] = {2,5,1,3,4,8,6,55,7};
    int temp, i ,j;
    int len = sizeof(arr)/sizeof(arr[0]);

    for(i=0;i<len;++i)
    {
        for(j=i+1;j<len;++j)
        {
            if(arr[i]>arr[j])
            {
                temp =  arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }    
        printf("sorted array is %d\n",arr[i]);   
   }

}
#include<stdio.h>
int main()
{
	int i, x=0, y=0;
	int arr[] = {2,5,1,6,11,10,6,2,5};
	int len = sizeof(arr)/sizeof(arr[0]);

	for(i=0;i<len;i++)
	{
		if(arr[i]%2 == 0)
		{
			x += arr[i];
		}
	} 
	printf("%d\n",x);
}
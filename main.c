#include<stdio.h>
#include<stdlib.h>

void max_Min(int *a,int l,int *max,int *min)
{
	int i;
	int holder1= *a;		int holder2=*a;
	for(i=0;i<l-1;i++)
	{
		if(*(a+i)>=*(a+(i+1)))
            *max = *(a+i);
        else
            *max = *(a+(i+1));
        if(*max>=holder1)
            holder1=*max;
        else
            *max = holder1;
	}
	//printf("The max value is: %d", *max);
	for(i=0;i<l-1;i++)
	{
		if(*(a+i)<=*(a+(i+1)))
			*min = *(a+i);
		else
			*min = *(a+(i+1));
		if(*min<=holder2)
			holder2 = *min;
		else
			*min = holder2;
	}
}
int main()
{
    while(1){
	int n; int max;
	int min;
	printf("Enter the length of array\n");
	scanf("%d",&n);
	int arr[n];
	int i;
	printf("Enter the elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	max_Min(arr,n,&max,&min);
	printf("Max=%d    Min=%d\n",max,min);
    }
	return 0;
}

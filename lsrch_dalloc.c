#include<stdio.h>
void main()
{
	int *p,n,val,i,flg=0;
	printf("Enter the no. of elements:");
	scanf("%d",&n);
	p=(int *)malloc(sizeof(int)*n);
	printf("Enter the elements:");
	while(i<n)
	{
		scanf("%d",&*(p+i));
		i++;			
	}
	printf("Enter the value to be searched for?");
	scanf("%d",&val);
	i=0;
	while(i<n)
	{
		if(*(p+i)==val)
		{
			flg++;
		}
		i++;
	}
	if(flg==0)
		printf("Value was not present in the list");
	else
		printf("%d was present %d times in the list",val,flg);
}

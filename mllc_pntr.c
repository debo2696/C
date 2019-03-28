#include<stdio.h>
void main()
{
	int *p,n,i;
	printf("\nEnter no. of blocks:");
	scanf("%d",&n);
	p=(int *)malloc(4 * sizeof(int));
	for(i=0;i<n;i++)
	{
		*(p+i)=i+10;
	}
	printf("\nShowing all values");
	for(i=0;i<n;i++)
	{
		printf(" %d",*(p+i));
	}
	printf("\nShowing all addresses");
	for(i=0;i<n;i++)
	{
		printf(" %d",(p+i));
	}
}

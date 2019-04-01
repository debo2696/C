#include<stdio.h>
void main()
{
	int arr[3][3]={{2,1,2},{2,5,2},{2,1,3}},r=3,c=3,i,j,fd=0,sd=0;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
			printf("%d ",arr[i][j]);
		printf("\n");
	}
	//1st diag
	for(i=0,j=0;i<r,j<c;i++,j++)
		if(i==j)
			fd=fd+arr[i][j];
	printf("%d ",fd);
	//2nd diag
	for(i=0,j=c-1;i<c,j>=0;i++,j--)
		if(i!=j)
			sd=sd+arr[i][j];
	printf("%d",sd);
}

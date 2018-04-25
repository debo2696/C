#include<stdio.h>
#include<conio.h>
int main()
{
	int arr[10][10],r,c,i,j,flag=0;
	printf("Enter the no. of row(s):");
	scanf("%d",&r);
	printf("Enter the no. of column(s):");
	scanf("%d",&c);
	printf("Enter %d values for ur matrix:\n",r*c);
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			flag++;
			printf("%d:",flag);
			scanf("%d",&arr[i][j]);
		}
	}
	printf("Your created matrix is:\n\n");
	printf("\t\t\t");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d ",arr[i][j]);
		}
		printf("\n\t\t\t");
	}
	return 0;
	getch();
}

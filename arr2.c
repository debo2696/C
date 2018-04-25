#include<stdio.h>
#include<conio.h>
int main()
{
	int arr[100],i,;
	printf("Enter a[0]-a[3]:\n");
	scanf("%d",&arr[0]);
	scanf("%d",&arr[1]);
	scanf("%d",&arr[2]);
	scanf("%d",&arr[3]);
	scanf("%d",&arr[4]);
	scanf("%d",&arr[5]);
	printf("\n");
	for (i=6;i<=10;i++)
	{
		arr[i]=arr[i-5]*arr[i-4];
		printf(" arr[%d]:%5d",i,arr[i]);
	}
	return 0;
	getch();
}

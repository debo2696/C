//This program's exiting on it's own after taking the 2nd input
#include<stdio.h>
#include<conio.h>
int main()
{
	int arr[100],i;
	printf("Enter a[0]-a[5]:\n");
	scanf("%d",arr[0]);
	scanf("%d",arr[1]);
	scanf("%d",arr[2]);
	scanf("%d",arr[3]);
	scanf("%d",arr[4]);
	scanf("%d",arr[5]);
	for (i=6;i<=10;i++)
	{
		arr[i]=arr[i-5]*arr[i-4];
		printf("arr[%d]:%d",i,arr[i]);
		printf("\n");
	}
	return 0;
	getch();
}

#include<stdio.h>
#include<conio.h>
int main()
{
	int arr[20],n,val,flag=0,i;
	printf("Enter the array size:");
	scanf("%d",&n);
	printf("Enter %d values:\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Values entered are as follows:");
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\nEnter the value to be searched for:");
	scanf("%d",&val);
	for(i=0;i<n;i++)
	{
		if(arr[i]==val)
		{
			flag++;
			printf("The values is found in the %dth position\n",i+1);
		}
		
	}
	printf("The value is found %d times",flag);
	return 0;
	getch();	
}

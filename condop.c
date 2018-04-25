#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c,big,small;
	printf("Enter 3 values:\n");
	printf("A:");
	scanf("%d",&a);
	printf("B:");
	scanf("%d",&b);
	printf("C:");
	scanf("%d",&c);
	big=a>b?(a>c?a:c):(b>c?b:c);
	printf("Big:%d",big);
}

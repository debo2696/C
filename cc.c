#include<stdio.h>
#include<string.h>

void main()
{
	int i,n;
	char c,a[30];
	printf("\nEnter string length:");
	scanf("%d",&n);
	printf("\nEnter the string:");
	for(i=0;i<n;i++)
		scanf("%c",&a[i]);
	printf("\nString is:");
	printf("\t");
	for(i=0;i<n;i++)
		printf("%c",a[i]);
	for(i=0;i<n;i++)
	{
		a[i]=a[i]+3;
		if(a[i]=='x')
			a[i]='a';
			
        }
		printf("\n");
	printf("\nCiphered string is:");
	printf("\t");
	for(i=0;i<n;i++)
		printf("%c",a[i]);
}


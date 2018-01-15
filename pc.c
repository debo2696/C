#include<stdio.h>
#include<string.h>
void main()
{
char a[20],set[26]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'},key[5][5];
int i,n,k,j;
printf("Enter the string length:");
scanf("%d",&n);
printf("Enter the key string:");
for(i=0;i<n;i++)
	scanf("%c",&a[i]);
printf("\nKEY:");
for(i=0;i<n;i++)
	printf("%c",a[i]);
printf("The table for this key is:");
for(k=0;k<26;k++)
{
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[i]==set[k])
				key[i][j]=a[i];
			else 
				key[i][j]=set[k];
		}
	}
}
for(i=0;i<n;i++)
{
	for(j=0;j<n;j++)
	{
		printf("%c",key[i][j]);
	}
}
}
			
          


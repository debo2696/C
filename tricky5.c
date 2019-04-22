#include<stdio.h>
void main()
{
	int j=0,i=0,m=0;
	for(i=1;i<=10;i++)
	{
		j=j++;
		m=++m;
		
	}
	printf("j:%d m:%d",j,m);
}



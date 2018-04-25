#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<conio.h>
int main()
{
	int k,i;
	long t;
	t=time(NULL);
	srand(t); //Changing the seed value
	printf("%f",t);
	for (i=0;i<=10;i++)
	{
		k=rand()%1000;
		printf("%d",k);
		printf("\n");
	}
return 0;
getch();
}

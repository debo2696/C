#include<stdio.h>
#include<conio.h>
int main()
{
	int a=-1,b=10,c;
	int f=5,g=20,e;
	c=++a && ++b;
	e=++f && ++g;
	printf("A:%d",a);
	printf("\nB:%d",b);
	printf("\nC:%d",c);
	printf("\n");
	printf("\nF:%d",f);
	printf("\nG:%d",g);
	printf("\nE:%d",e);
	return 0;
	getch();
}

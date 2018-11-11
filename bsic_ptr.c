#include<stdio.h>
void main()
{
	int a=2696;
	int *ptr;
	ptr= &a;
	printf("a=%d, &a=%u, *ptr=%d, &ptr=%u, ptr:%u",a,&a,*ptr,&ptr,ptr);
	getch();
}

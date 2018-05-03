#include<stdio.h>
#include<conio.h>
int fun1(int);
int fun2(int);
void funstr();
void funstr1();

void main()
{
	int v,a=5,val;
	v=fun1(a);
	val=fun2(v);
	printf("fun1:%d\n",v);
	printf("func2:%d\n",val);
	funstr();
}
int fun1(int ax)
{
	int b=10,c;
	c=b+ax;
	return c;
}
int fun2(int bx)
{
	int d=20,g;
	g=d*bx;
	return g;
}
void funstr()
{
	printf("fcstr: Bye");
	funstr1();
}
void funstr1()
{
	printf(" 0__0");
}

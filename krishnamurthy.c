//Krishnamurthy 145=1!+4!+5!
#include<stdio.h>
int fct(int);
int krishnm(int);
void main()
{
	int n=145;
	if(krishnm(n)==n)
		printf("%d A Krishnamurthy no.",n);
	else
		printf("%d NOT Krishnamurthy no.: %d",n,krishnm(n));
}
int fct(int n)
{
	while(n>=1)
		return n*fct(n-1);
	return 1;
}
int krishnm(int n)
{
	int sum=0;
	int temp=n;
	while(temp!=0)
	{
		sum+=fct(temp%10);
		temp=temp/10;
	}
	return sum;
}

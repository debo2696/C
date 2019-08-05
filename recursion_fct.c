#include<stdio.h>
int recursion(int);
void main()
{
	int n=5;
	int val=(5*(4*(3*(2*(1))))); //this is what happens inside the function
	printf("factorial of %d: %d, %d",n,factrec(n),val);
}
int factrec(int n)
{
	while(n>=1)
	{
		return n*factrec(n-1);    
	}
	return 1;
}

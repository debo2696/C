#include<stdio.h>
#include<math.h>
long long int power(long long int,long long int,long long int);

int main()
{
long long int p,g,a,y,ka,kb,b,x;
p=23;
printf("\nValue of Primitive root.:%lld",p);
g=9;
printf("\nValue of Generator:%lld",g);
a=4;
printf("\nPrivate key for ALICE:%lld",a);
b=3;
printf("\nPrivate key for BOB:%lld",b);
x=power(g,a,p);
y=power(g,b,p);
ka=power(y,a,p);
kb=power(x,b,p);
printf("\n\nSecret key for ALICE is:%lld",ka);
printf("\nSecret key for BOB is:%lld",kb);
return 0;
}

long long int power(long long int a,long long int b,long long p)
{
	if(b==1)
		return a;
	else;
		return (((long long int)pow(a,b))%p);
}




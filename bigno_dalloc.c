#include<stdio.h>
void main()
{
	int *p,i,n,big,tmp;
	printf("How many elements will the array have:");
	scanf("%d",&n);
	p=(int *)malloc(sizeof(int)*n);
	while(i<n){
		scanf("%d",&*(p+i));
		i++;}
	i=0;
	big=*(p+i);
	printf("%d\n",big);
	while(i<n)
	{
		if(*(p+i)>big)
		{
			tmp=*(p+i);
			*(p+i)=big;
			big=tmp;
		}
		i++;
	}
	printf("Biggest no.%d",big);
}

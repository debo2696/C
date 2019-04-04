#include<stdio.h>
void main()
{
	int a[20],*ptr,n=4,i;;
	ptr=a;
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n;i++)
		printf("%d ",*ptr+i);
	printf("\n");
	for(i=0;i<n;i++)
		printf("%d ",ptr+i);
	printf("\n");
	for(i=0;i<n;i++)
		printf("%d ",*(ptr+i));
}

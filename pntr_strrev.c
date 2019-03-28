#include<stdio.h>
void main()
{
	char *s,ch;
	int i,j;
	printf("Enter a String:");
	gets(s);
	for(i=0;*(s+i)!='\0';i++);
	j=i;
	for(i=0;i<j/2;i++)
	{
		ch=*(s+i);
		*(s+i)=*(s+j-1-i);
		*(s+j-1-i)=ch;
	}
	printf("Reversed string:%s",s);
}

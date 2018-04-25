#include<stdio.h>
int main()
{
	char chr;
	printf("Enter a character:");
	chr=getchar();
	printf("Character now:%c",chr);
	printf("\nASCII of %c:%d",chr,chr);
	if(chr>='A' && chr<='Z')
	{
		chr=chr+32;
		printf("\n%c in Lower case:%c with ASCII:%d", chr-32,chr,chr);
	}
	else if(chr>='a' && chr<='z')
	{
		chr=chr-32;
		printf("\n%c in Upper case:%c with ASCII:%d",chr+32,chr,chr);
	}
	return 0;
	getch();
}

#include<stdio.h>
void main()
{
  int i=0,j=0;
  ZERO:
  YO:
  {
  	++j;
    ++i;
  }
  for(i=0;i<10;i++)
  {
    printf("%d %d",i,j);
    goto ZERO;
  }
}

#include<stdio.h>
void main()
{
  int i=0;
  ZERO:
  YO:
  {
    printf("In Yo");
  }
  for(i=0;i<10;i++)
  {
    printf("%d",i);
    goto ZERO;
  }
}

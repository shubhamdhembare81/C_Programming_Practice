#include <stdio.h>

int main()
{
  int a=123;
  short b=12345;
  long c=123456789;
  long long i=1233456789012345670;

  printf("%d \n", a);
  printf("%.2d \n", a);
  printf("%10d \n", a);
  printf("%4d \n", a);
  printf("%-10d \n", a);
  printf("%hd \n", a);
  printf("%1d \n", a);
  printf("%d \n", b);
  printf("%.2d \n", b);
  printf("%10d \n", b);
  printf("%d \n", c);
  printf("%d \n", i);
   

  return 0;
}
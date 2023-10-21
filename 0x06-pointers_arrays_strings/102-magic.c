#include <stdio.h>

int main(void)
{
  int n;
  int a[5];
  int *p;

  a[2] = 1024;
  p = &n;
  /*
   */ 
 p = a;
    *(p + 2) = 98;
    write(1, "a[2] = ", 7);
    write(1, (p + 2), 1);
    write(1, "\n", 1);
  /* ...so that this prints 98\n */
  printf("a[2] = %d\n", a[2]);
  return (0);

}

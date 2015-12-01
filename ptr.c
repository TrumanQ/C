#include <stdio.h>

int main ()
{
  int x = 5;
  int *iPtr;

  printf ( "The x = %d, &x is %p, the iPtr is %p.\n", x, &x, iPtr );

  iPtr=&x;
  /* C will print a numeric representation of the pointer address. */
  printf ( "The iPtr is initialized to %d.\n",  *iPtr ); 
  printf ( "The iPtr is initialized to %p.\n", iPtr );

  return 0;

}

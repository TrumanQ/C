#include <stdio.h>

int main ()
{
  char *myString = "Mike";
  int x;

  printf ("\nThe pointer variable's value is: %p\n", *myString );
  printf ("\nThe pointer variable's value is: %p\n", myString );
  printf("\nThe pointer variable point to: %s\n", myString );

  for ( x=0; x<5; x++ )
    printf ( "%p\n", myString[x] );
}

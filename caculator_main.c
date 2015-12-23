#include <stdio.h>
#include "caculator.h"

int main ()
{

  int selection = 0;
  float l, w, h;

  printf ( "\nThe Function Wizard\n" );
  printf ( "1\tDetermin perimeter of a rectangle;\n" );
  printf ( "2\tDetermin area of a rectangle;\n" );
  printf ( "3\tDetermin volume of a rectangle;\n" );

  printf ( "Enter selection: " );
  scanf ( "%d", &selection );

  switch ( selection )
    {
    case 1:
    printf ( "\nEnter length: " );
    scanf ( "%f", &l );
    printf ( "\nEnter width: " );
    scanf( "%f", &w );
    perimeter ( l, w );
    break;

    }
}

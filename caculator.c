#include <stdio.h>
//#include "caculator.h"

void perimeter ( float l, float w )
{
  printf ( "\nPerimeter is %.2f. \n", 2*l + 2 * w );
}

void area ( float l, float w )
{
  printf ( "\nArea is %.2f. \n", l * w );
}

void volume ( float l, float w, float h )
{
  printf ( "\nVolume is %.2f.\n", l * w * h );
}

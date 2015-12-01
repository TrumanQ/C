#include <stdio.h>

int main()
{
  int iTwoD[3][3];

  int i, j;

  for ( i=0; i<3; i++ )
    {
      for ( j=0; j<3; j++)
	{
	  iTwoD[i][j] = j;
	  printf ("iTwoD[%d][%d] = %d.\n", i, j, iTwoD[i][j] );
	}
    }

  return 0;

}

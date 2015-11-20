#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
  /*int iRandomNum=0; */

  int i, real_random;  
  time_t curtime;
  printf("The random number is %d \n", iRandomNum);

  curtime = time (NULL);
  /* int iSrandomNum=rand_r( &iRandomNum); */
  srand(curtime);

  iRandomNum=rand();
  printf("The srandom number is %d \n", iRandomNum  );

  for ( i=1; i<=200; i++ )
    {
      real_random = rand ();
    }
  
  printf ("The real_random is %d \n", real_random );

}

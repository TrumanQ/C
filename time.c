#include <stdio.h>
#include <time.h>

int main()
{
  time_t curtime;
  struct tm *loctime;

  /* Get the current time. */
  curtime = time ( NULL );
  printf ( "The current time is %d \n", curtime );

  /* Convert it to local time representation. */
  loctime = localtime ( &curtime );
  printf ( "The local time is %d \n", loctime );

  return 0;

}

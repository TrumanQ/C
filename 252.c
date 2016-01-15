#include <stdio.h>

int main()
{
  FILE *pRead;
  char col1[20];

  pRead = fopen("names.dat", "r" );

  if ( pRead == NULL)
    printf ( "\nFile cannot be opened.\n" );
  else
    printf ( "\nFile opened for reading.\n" );
  fscanf ( pRead, "%s", col1 );
  printf ( "\nDon\'t judge eof %s \n", col1 );

  while ( !feof ( pRead ) )
    {
      printf ( "%s\n", col1 );
      fscanf (pRead, "%s", col1 );
    }
  return 0;
}

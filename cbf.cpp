#include <stdio.h>
#include <stdlib.h>

int main( ) {
  FILE * archivo = fopen( "mate.txt", "rb" );

  if( archivo == NULL ) {
    perror( "Error en la apertura del archivo" );
    return 1;
  }

  char *contenido = (char *)calloc(200, sizeof(char));

  while( 1 ) {
    fscanf( archivo, "%s", contenido );

    if( feof( archivo ) != 0 ) {
      break;
    }

    printf( "%s\n", contenido );
  }

  fclose( archivo );
  printf( "\nSe ha leido el archivo correctamente...\n" );

  return 0;
}

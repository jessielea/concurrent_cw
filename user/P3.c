#include "P3.h"

void main_P3() {
  char* result;
  while( 1 ) {
    read(STDOUT_FILENO, result, 2 );
    write( STDOUT_FILENO, result, 2 );
    write( STDOUT_FILENO, "P3", 2 ); 
  }

  exit( EXIT_SUCCESS );
}

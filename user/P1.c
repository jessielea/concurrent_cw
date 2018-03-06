/* Copyright (C) 2017 Daniel Page <csdsp@bristol.ac.uk>
 *
 * Use of this source code is restricted per the CC BY-NC-ND license, a copy of
 * which can be found via http://creativecommons.org (and should be included as
 * LICENSE.txt within the associated archive or repository).
 */

#include "P1.h"

void main_P1() {
  int x = 20;
  while( 1 ) {
    if(x%20 == 0) {
      write( STDOUT_FILENO, "P1", 2 );
    }
  }

  exit( EXIT_SUCCESS );
}
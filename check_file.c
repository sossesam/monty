#include "monty.h"
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>



int check_file(int count, char *file){
int i;
 if( count!= 2 ) {
      fprintf( stderr,
        "USAGE: monty file\n" );
      return EXIT_FAILURE;
    }
 if( !access( file, R_OK ) ) {
	 for(i = 0; file[i] != '\0'; i++){
	 	if(file[i] == 46 && file[i + 1] == 109){
		
		return EXIT_SUCCESS;
		}
	 
	 }
      return EXIT_SUCCESS;
    } else {
      fprintf(stderr, "Error: Can't open file %s\n", file);
      return EXIT_FAILURE;
    }





return 0;

}

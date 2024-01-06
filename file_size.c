#include "monty.h"
#include <stdio.h>


size_t get_file_size(char *file_name){
FILE *fptr;
size_t size;


fptr = fopen(file_name, "r");
fseek(fptr, 0, SEEK_END);
size = ftell(fptr);

return size;

}

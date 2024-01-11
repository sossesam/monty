#include "monty.h"
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h> 


int main(int argc, char **argv){

int arg_count;
char *file_name;
char **buf;
size_t file_size;
token_t  *tokens;
int line;


line = 1;
arg_count = argc;
file_name = argv[1];
check_file(arg_count, file_name);
file_size = get_file_size(file_name);;
buf = malloc(file_size);
read_file_to_memory(buf, file_name, file_size);
tokens = NULL;

tokens =  tokenize(buf);


while(tokens != NULL){
if(check_token(tokens->value) == -1){
fprintf(stderr,"L%d: unknown instruction: %s\n", line, tokens->value);
return EXIT_FAILURE;
}

line++;
tokens = tokens->next;
}












return 0;

}

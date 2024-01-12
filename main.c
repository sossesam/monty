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
stack_t **number_stack;
int line;
int pos;
int token_number;


line = 1;
arg_count = argc;
file_name = argv[1];
check_file(arg_count, file_name);
file_size = get_file_size(file_name);;
buf = malloc(file_size);
read_file_to_memory(buf, file_name, file_size);
tokens = NULL;
tokens =  tokenize(buf);
number_stack= malloc(sizeof(stack_t));


while(tokens != NULL){
if(check_token(tokens->value) == -1){
fprintf(stderr,"L%d: unknown instruction: %s\n", line, tokens->value);
return EXIT_FAILURE;
}else if(check_token(tokens->value) >= 1)
{
    pos = check_token(tokens->value) - 1;
    if(strcmp(tokens->value, "pall") == 0){
        operations[pos].f(number_stack, 0);
    }
    
}else if(check_token(tokens->value) == 0){
    token_number = atoi(tokens->value);
    operations[pos].f(number_stack, token_number);
}

line++;
tokens = tokens->next;
}




return 0;

}

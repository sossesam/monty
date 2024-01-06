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
token_t tokens;

/**
char *token;
char delimit[]=" \t\r\n\v\f $";
char *op_funcs[] = {"push", "pall", '\0'};
int i;
int value;
char *current_func;
**/


arg_count = argc;
file_name = argv[1];
check_file(arg_count, file_name);
file_size = get_file_size(file_name);;
buf = malloc(file_size);
read_file_to_memory(buf, file_name, file_size);
printf("%s", *buf);







/**if((fptr = fopen(file_name,"r")) == NULL){
       printf("Error! opening file");

       exit(1);
   }

fread(&buf, sizeof(char), 300, fptr);
**/

/**token = strtok(buf, delimit);
 while (token != NULL){
	for(i = 0;  op_funcs[i] != NULL; i++){
	value =  strcmp(token, op_funcs[i]);
	if(value == 0){
		current_func = token;

	}
	else if(token[0] > 47 && token[0] < 59){
	printf("%s %s\n", current_func, token);
	}
	
	
  
   token = strtok(NULL, delimit);
	}
 }


**/








return 0;

}

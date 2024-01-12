#include "monty.h"
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h> 


int is_num(char *value)
{
if(isdigit(*value) == 2048){
return 0;
}
else{
return -1;
}
}

int check_token(char *string)
{
int i;

for(i = 0; operations[i].opcode; i++)
{
if(strcmp(operations[i].opcode, string) == 0)
{
return i + 1;	
}
else if(is_num(string) == 0)
{
return 0;
}

}
return -1;
}

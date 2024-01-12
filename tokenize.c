#include "monty.h"
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>











token_t  *tokenize(char **buf){

token_t *node, *head, *current;
char *token;
char *delimit;


node = NULL;
head = NULL;
current = NULL;
delimit = "$ \t\r\n\0";




token = strtok(*buf, delimit);



while(token != NULL){
node = malloc(sizeof(token_t));
node->value = malloc(sizeof(char *) * strlen(token) + 1);
node->value = token;
node->next= NULL;

if(head == NULL){
head = node;
current = node;
}

current->next = node;
current = current->next;


token = strtok(NULL, delimit);
}


	
return head;
}

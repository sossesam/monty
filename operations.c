#include "monty.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
instruction_t operations[2] = {{"push", push}, {"pall", pall}};


void push(stack_t **stack, int number){
    stack_t *node;

    node = malloc(sizeof(stack_t));
    node->n = sizeof(int);
    node->next = malloc(sizeof(stack_t));
    node->next = malloc(sizeof(stack_t));
    if(node == NULL){
        printf("Malloc failed\n");
    }
   
    node->n = number;
    node->next = (*stack);
    (*stack) = node;
}

void pall(stack_t **stack, int number){
    stack_t *node;

    node = malloc(sizeof(stack_t));
    if(number == 0){
        
    }
    
    node = (*stack);
    while(node != NULL){
        printf("%d\n", node->n);
        node = node->next;
    }
    

    

}
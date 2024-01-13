#include "monty.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
instruction_t operations[4] = {{"push", push}, {"pall", pall}, {"pint", pint}, {"pop", pop}};


void push(stack_t **stack, int number){
    stack_t *node;

  

    node = malloc(sizeof(stack_t));
    node->n = sizeof(int);
    node->next = malloc(sizeof(stack_t));
    node->prev = malloc(sizeof(stack_t));
    if(node == NULL){
        printf("Malloc failed\n");
    }
    
   
    node->n = number;
    node->next = (*stack);
    node->prev = NULL;
  
    if((*stack) != NULL){
        (*stack)->prev = node;
    }
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

void pint(stack_t **stack, int number){
   
   if(number == 0){}
   printf("%d\n", (*stack)->n);
return;
}

void pop(stack_t **stack, int number){
    stack_t *node;

    node = malloc(sizeof(stack_t));
    if(number == 0){
        
    }
    
    node = (*stack);
  

    
    (*stack) = node->next;
    free(node);
    
  
}
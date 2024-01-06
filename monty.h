#ifndef MONTY_H
#define MONTY_H
#include <stddef.h>


/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
        int n;
        struct stack_s *prev;
        struct stack_s *next;
} stack_t;


/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
        char *opcode;
        void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

/**
 * struct token_s - list of arguments from the file
 * @n: argument
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for argument from the file
 */
typedef struct token_s
{
        char *token;
        struct token_s *prev;
        struct token_s *next;
} token_t;


int check_file(int count, char *file);
int read_file_to_memory(char **b, char *filename, size_t n);
size_t get_file_size(char *file_name);
token_t tokenize(char *buf);


#endif

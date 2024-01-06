#include "monty.h"
#include <stdio.h>
#include <stdlib.h>

int read_file_to_memory(char **b, char *filename, size_t n) {
size_t bytes_read;
FILE *fp;
    
fp = fopen(filename, "r"); 
    if (fp == NULL) {
        perror("Error opening file");
        return -1; 
    }

    
    *b = malloc(n);
    if (*b == NULL) {
        perror("Error allocating memory");
        fclose(fp);
        return -1;
    }

   bytes_read = fread(*b, 1, n, fp);
    fclose(fp);

    
    if (bytes_read != n) {
        fprintf(stderr, "Warning: Read only %ld bytes out of %ld\n", bytes_read, n);
    }

    return bytes_read;
}





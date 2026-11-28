#include <errno.h>
#include <string.h>
#include <stdio.h>

#include "machine.h"
/**
 * 
 * Take in a TM description as a file and create a TM following it
 */
void read_tm(FILE *file, Machine* tm){
    // Check if the file is valid
    if(file == NULL) {
        perror("Error opening file");
    }

    // Grab the number of states
    char* line = NULL;
    size_t capacity = 0;
    getline(&line, &capacity, file);

    int num_states = strtol(line);

    // Store the accept state
    

    // Store the reject state




}
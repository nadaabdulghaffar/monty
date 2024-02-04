#include "monty.h"
/**
 * arguments_validation - check validation of arguments
 * @argc: Number of argumenst
 * Retrun: void
*/
void arguments_validation(int argc)
{
    if (argc == 2)
        return;
    fprintf(stderr,"USAGE: monty file\n");
    exit(EXIT_FAILURE);
}

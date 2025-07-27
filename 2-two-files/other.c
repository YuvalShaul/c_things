#include <stdio.h>

// This is the DEFINITION (i.e implementation) of func_a function.
// This is NOT the declaration (that you can find in other.h header file)

int func_a()
{
    int local_var = 49;   /* This is on the stack */
    printf("This is func_a!!!\n");
}
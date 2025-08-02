#include <stdio.h>

int main()
{
    char *p;  /* create a pointer on the stack */

    p = 0l;  /* This will give you just a warning 
                We want to write to byte number 0 of our process virtual memory */

    *p = 37;  /* This will fail */

    /* Ther's no point putting here anything, correct?  */
    printf("The end.\n");

}
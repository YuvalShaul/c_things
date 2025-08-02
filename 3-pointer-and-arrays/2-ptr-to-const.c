#include <stdio.h>

const char a = 37;  /* this will put a in a write protected page (through the MMU)*/

int main()
{
    char *p;  /* create a pointer on the stack */

    p = &a;  /* This will give you just a warning */

    *p = 37;

    /* Ther's no point putting here anything, correct?  */
    printf("The end.\n");

}
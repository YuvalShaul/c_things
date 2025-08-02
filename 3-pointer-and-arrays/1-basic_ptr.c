/* 
This is a simple demonstration of using a pointer.
Remember that: a pointer is a variable that stores an address*/

#include <stdio.h>

char a = 37;  /* this char is locaed in the data segment 
                 the value of 37 in ASCII will results in '%' character */

int main()
{
    char *p;

    printf("a size is: %lu\n", sizeof(a));  /* printing the size of the char */
    printf("p size is: %lu\n", sizeof(p));  /* printint the size of a pointer */

    p = &a;  /* make p point to the address of a */
    printf(" print a through the pointer: %c\n", *p);

    /* dereference p and write to a through p */
    /* Dereference is using the pointer to WRITE where it points to */
    *p = 42;  /* This is the '*' (asterisk) character */

    printf("a after write is: %c\n", a);   /* printing a directly - not through the pointer*/

}
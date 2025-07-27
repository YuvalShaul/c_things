#include "other.h"
/* The other.h file has a declaration of the func_a function. 
Without it, the compiler will try to figure out how it looks like by looking at the call.
It then tell us that the function declaration it came up to was "implicit", because it has not 
seen a declaration explicitly. */


int main()
{
    func_a();   // Well, it looks like a function that accept no parameter, and maybe returning void.
                // ..but without a declaration - who knows?
}
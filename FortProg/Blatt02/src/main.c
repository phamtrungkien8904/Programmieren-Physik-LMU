#include <stdio.h>
#include "pointer_fns.h"

int main()
{
    printf("Working with pointers\n");
    working_with_pointers();

    // ---------------------------------
    printf("Pointers and arrays\n");
    pointers_and_arrays();

    // ---------------------------------
    printf("Figuring out the private key\n");

    printf("Retrieved private key: %d\n", is_private_key(0));

    cleanup();
    return 0;
}
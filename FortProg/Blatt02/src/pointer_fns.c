#include "pointer_fns.h"

// static infront of a type name means that the variable is only visible within
// the file.
static int *private_key = NULL;
static int *public_key;

void working_with_pointers()
{
    /*
     * Todo:
     * 1. Create any variable
     * 2. Assign it a value
     * 3. Print the variable by
     *   - accessing it directly
     *   - creating a pointer that points to it and reading it through a pointer
     * 4. Change the value of the variable directly
     * 5. Print it again
     * 6. Change the variable via the pointer
     * 7. Print it again
     * 8. Did the address the pointer points to change from any of these steps?
     */
}

void pointers_and_arrays()
{

    // An int array with 6 elements
    int arr[6];

    // Sets the 4th element in arr to 53
    arr[3] = 53;

    // Arrays are continuous sections of memory. Pointers can be used to access
    // the memory of an array.
    printf("arr: %d\n", *(arr + 3));

    // arr + 3 can be broken down into:
    // -    arr: address of first element (lets assume it is 0)
    // -    + 3 times the size of the datatype associated with the pointer in
    //      this case int which typically has a size of 4 byte.

    /*
     * Todo:
     * 0. Do the following either in a for or while loop.
     * 1. Initialize all but the last two elements of the array to some value
     *    using only the pointer to access the array.
     * 2. Assign the value -1855425872 to the 5th element of the arr
     * 3. Assign the value 1069513965 to the 6th element of the arr
     */


    /*
     * Todo: Print all the values of the array
     */

    // If you did everything correctly, this should print: 0.123000.
    double *wrong_ptr = (double *)arr;
    printf("%f \n", *(wrong_ptr + 2));

    // Writing a type in paranthesis in front of a variable is called casting.
    // It tells the compiler to treat the variable as a different type. 
    // Generally conversions are not trivial. Casting is also not always safe.
    //
    // In this example we cast an int pointer to a double pointer. While the
    // int pointer works with memory regions of size 4 bytes, the double pointer
    // works with 8 bytes. Generally casting an int to a double is not safe and
    // could lead to reading or writing memory out of bounds, which leads to
    // undefined behavior.
    //
    // Since we had an array of ints, we basically treated the last two values
    // as a double and stored the correct values inside it to read out a 
    // meaningful double value.
}

// This function returns a pointer to int. This pointer stores a public key
// (really just a random number). The private key is also generated in this
// function. When calling this function in main, you should only be able to
// access the public key. Figure out a way to access the private key anyway
// without changing any code within this function.
//
// Use the function "is_private_key" below to check whether you got it right.
int *private_public_keygen()
{
    // Treat the next line as:
    // int arr[10];
    int *arr = (int *)malloc(10 * sizeof(int));

    arr[0] = rand();
    arr[9] = rand();
    private_key = arr;
    public_key = &arr[9];
    return &arr[9];
}

/*
 * This function takes a number and checks whether it matches the private key.
 *
 * @param[in] test_key The number to check against the private key
 * @return 0 if it doesn't match, 1 otherwise
 */
int is_private_key(int test_key)
{
    if (private_key == NULL)
    {
        printf("Private key not generated yet\n");
        exit(1);
    }
    return *private_key == test_key;
}

void cleanup()
{
    if (public_key != NULL)
    {
        free(private_key);
        public_key = NULL;
    }
}
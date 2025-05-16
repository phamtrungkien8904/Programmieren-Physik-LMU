#include <timer_lib.h> //get_clock, print_diff
#include <stdio.h>     //printf
#include <stdlib.h>    //malloc
#include <time.h>      //time_t

// Precompiler directives, will be covered later on in the lecture.
// For now, it is enough to know that everytime the keyword after #define
// shows up in the code, it will be replaced by what is directly behind it.
#define DATA_SIZE 4096
//#define ARRAY_SIZE (1<<24)
#define ARRAY_SIZE 2048

// Structs are custom data types. You can fill them with pretty much everything
// you want. Think of them as the part of a class that holds all the variables
struct lots_of_data_s
{
    int a[DATA_SIZE];
} typedef data; 
// Typedef just defines a type. Without it, to use the struct you have to write
// struct lots_of_data_s. With typedef you can just use data (without writing
// struct in front of it).


// This function returns a pointer to a memory region on the heap. The memory 
// area is exactly ARRAY_SIZE * sizeof(data) bytes big.
data *get_lots_of_data()
{
    data *lots_of_data = (data *)malloc(ARRAY_SIZE * sizeof(data));
    return lots_of_data;
}

/////////// Call //////////
void call_by_value(data actual_data)
{
    // This function is called by value. This means that the data is copied
    // into the function. If you change the data in the function, it will
    // not change the original data.
    actual_data.a[0] = 1;
}

void call_by_reference(data *ptr_to_data)
{
    // This function is called by reference. This means that the data is not
    // copied into the function. If you change the data in the function, it
    // will change the original data.
    ptr_to_data->a[0] = 1;
    return;
}
///////////////////////////

int main()
{
    /////////////// My Sol ///////////////
    // Call the function and store the return value
    data *data_ptr = get_lots_of_data();

    ///////////// Fixing SegFault /////////////
    // Check if the memory allocation was successful
    if (data_ptr == NULL)
    {
        printf("Memory allocation failed\n");
        return 1; // Exit the program with an error code
    }
    ///////////// Fixing SegFault /////////////
    
    // Access the first int in the data structure
    int first_value = data_ptr[0].a[0];
    
    printf("First value: %d\n", first_value);
    
    // Make the function calls BEFORE freeing the memory
    time_t start = get_clock();
    call_by_reference(&data_ptr[1]); // or (data_ptr +1)
    print_diff(start, get_clock(), 1);

    start = get_clock();
    call_by_value(data_ptr[1]); 
    print_diff(start, get_clock(), 1);
    
    // Free the allocated memory to prevent memory leaks
    free(data_ptr);
    /////////////// My Sol /////////////////

    return 0;
}
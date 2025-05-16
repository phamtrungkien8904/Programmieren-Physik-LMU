#include <timer_lib.h> //get_clock, print_diff
#include <stdio.h>     //printf
#include <stdlib.h>    //malloc
#include <time.h>      //time_t

// Precompiler directives, will be covered later on in the lecture.
// For now, it is enough to know that everytime the keyword after #define
// shows up in the code, it will be replaced by what is directly behind it.
#define DATA_SIZE 4096
#define ARRAY_SIZE (1<<24)

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

int main()
{
    time_t start = get_clock();
    while(get_clock() - start < 1 << 14)
    {
        1 + 1;
    }
    print_diff(start, get_clock(), 1);

    return 0;
}
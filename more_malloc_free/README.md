Dynamic Memory Allocation in C:
malloc and free malloc Function:

malloc stands for "memory allocation" and is used in C to dynamically allocate memory during program execution.
It reserves a block of memory of a specified size in bytes and returns a pointer to the first byte of the allocated memory.
Syntax: void* malloc(size_t size);
It takes the size of memory to allocate as an argument and returns a void pointer (void*) to the allocated memory block.
Example:

int *ptr;
ptr = (int*) malloc(5 * sizeof(int)); // Allocates memory for an array of 5 integers
free Function:

free is used to deallocate memory that was previously allocated using malloc.
It releases the memory block pointed to by the passed pointer, making it available for further allocations.
Syntax: void free(void* ptr);
It takes a pointer to the memory block that needs to be deallocated as its argument.
After calling free, the memory pointed to by the pointer becomes invalid, and accessing it leads to undefined behavior.
Example:

int *ptr;
ptr = (int*) malloc(5 * sizeof(int)); // Allocates memory
free(ptr); // Deallocates memory
Dynamic memory allocation using malloc and free is essential for managing memory dynamically in C programs, especially when dealing with data structures like arrays and linked lists.

Explanation of malloc and free in C
malloc() Function:

malloc() is a standard library function in C used for dynamic memory allocation.
It stands for "memory allocation."
It allocates a specified number of bytes of memory during program execution from the heap.
Syntax: void* malloc(size_t size);
It returns a void pointer (void*) to the allocated memory if the allocation is successful, or NULL if it fails.
Example:

int* ptr = (int*)malloc(5 * sizeof(int));
if (ptr == NULL) {
    // Allocation failed
}
free() Function:

free() is another standard library function in C used to deallocate memory allocated by malloc(), calloc(), or realloc().
It releases the memory back to the operating system.
Syntax: void free(void* ptr);
It takes a pointer to the memory block to be deallocated as its argument.
Example:

free(ptr);
ptr = NULL; // Optional but recommended to avoid dangling pointers
Memory allocated using malloc() should always be released using free() once it's no longer needed to prevent memory leaks and optimize memory usage in C programs.

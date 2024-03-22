 argc and argv in C
argc and argv:

In C programming, argc and argv are parameters passed to the main() function when a C program is executed from the command line.
argc stands for "argument count" and represents the number of command-line arguments passed to the program, including the name of the program itself.
argv stands for "argument vector" and is an array of strings (char *argv[]) where each element contains one of the command-line arguments passed to the program, including the name of the program itself.
The first element of argv (argv[0]) always contains the name of the program being executed.
The argc parameter helps determine the number of command-line arguments, while argv holds the actual values of these arguments.
Example:

int main(int argc, char *argv[]) {
    printf("The program name is: %s\n", argv[0]);
    printf("Number of arguments: %d\n", argc);
    for (int i = 1; i < argc; i++) {
        printf("Argument %d: %s\n", i, argv[i]);
    }
    return 0;
}


Usage:

argc and argv are commonly used in C programs to handle command-line arguments, allowing the program to accept inputs from the user when it is executed.
They enable the program to be more flexible and versatile, as it can perform different operations based on the command-line arguments provided by the user.
argc and argv provide a convenient way to interact with C programs from the command line, allowing users to pass inputs and customize program behavior without modifying the source code.

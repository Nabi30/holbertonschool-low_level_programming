Variables, If-Else, and While Loops in C
Variables in C:

Variables in C are used to store data during program execution.
They must be declared before they are used, specifying the data type and the variable name.
Example:

int age = 25;
float price = 10.99;
char grade = 'A';
If-Else Statements in C:

If-else statements are used for decision-making in C programming.
They allow you to execute different blocks of code based on certain conditions.
Syntax:

if (condition) {
    // code block to be executed if condition is true
} else {
    // code block to be executed if condition is false
}
Example:

int num = 10;
if (num > 0) {
    printf("Number is positive\n");
} else {
    printf("Number is negative\n");
}
While Loops in C:

While loops are used to repeat a block of code as long as a specified condition is true.
They are entry-controlled loops, meaning the condition is tested before the loop body executes.
Syntax:

while (condition) {
    // code block to be executed
}

Example:

int count = 0;
while (count < 5) {
    printf("Count: %d\n", count);
    count++;
}

Variables, if-else statements, and while loops are fundamental concepts in C programming, essential for building logic and controlling program flow.

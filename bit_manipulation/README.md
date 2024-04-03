
# <p align="center">C - Bit manipulation</p>



<p align="center">Bit manipulation in C involves using bitwise operators to directly interact with the individual bits of data types. It’s a powerful technique that allows for efficient low-level data processing. Here’s a brief overview of the bitwise operators in C:

AND (&): Sets each bit to 1 if both bits are 1.
OR (|): Sets each bit to 1 if one of the bits is 1.
XOR (^): Sets each bit to 1 if only one of the two bits is 1.
NOT (~): Inverts all the bits.
Left Shift (<<): Shifts all bits to the left, which is equivalent to multiplying by 2.
Right Shift (>>): Shifts all bits to the right, which is equivalent to dividing by 2.</p>

# <p>Here’s an example demonstrating some of these operators:</p>

```
#include <stdio.h>

int main() {
    unsigned int a = 0x53; // 0101 0011 in binary
    unsigned int b = 0xA7; // 1010 0111 in binary

    // Bitwise AND
    printf("a & b = %X\n", a & b); // Result: 0000 0011

    // Bitwise OR
    printf("a | b = %X\n", a | b); // Result: 1111 0111

    // Bitwise XOR
    printf("a ^ b = %X\n", a ^ b); // Result: 1111 0100

    // Bitwise NOT
    printf("~a = %X\n", ~a); // Result: 1010 1100

    // Left Shift
    printf("a << 1 = %X\n", a << 1); // Result: 1010 0110

    // Right Shift
    printf("a >> 1 = %X\n", a >> 1); // Result: 0010 1001

    return 0;
}

```
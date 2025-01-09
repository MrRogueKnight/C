#include <stdio.h>
int main() {
int result1 = 5 + 6 / 2;
int result2 = 2 * 3 % 4;
printf("Result 1: %d\n", result1);
printf("Result 2: %d\n", result2);
return 0;
}
/*
Here's a detailed step-by-step solution:

1. int result1 = 5 + 6 / 2; - Calculate the result of the expression 5 + 6 / 2.

Here's the order of operations:

a. 6 / 2 - Divide 6 by 2, resulting in 3.

b. 5 + 3 - Add 5 and 3, resulting in 8.

So, result1 is assigned the value 8.

1. int result2 = 2 * 3 % 4; - Calculate the result of the expression 2 * 3 % 4.

Here's the order of operations:

a. 2 * 3 - Multiply 2 and 3, resulting in 6.

b. 6 % 4 - Calculate the remainder of 6 divided by 4, resulting in 2.

So, result2 is assigned the value 2.

1. printf("Result 1: %d\n", result1); - Print the value of result1.

Output:

Result 1: 8

1. printf("Result 2: %d\n", result2); - Print the value of result2.

Output:

Result 2: 2

Here's the code with the output:

#include <stdio.h>
int main() {
    int result1 = 5 + 6 / 2;
    int result2 = 2 * 3 % 4;
    printf("Result 1: %d\n", result1); // Output: Result 1: 8
    printf("Result 2: %d\n", result2); // Output: Result 2: 2
    return 0;
}

This program demonstrates the use of arithmetic operators and the order of operations in expressions.
*/
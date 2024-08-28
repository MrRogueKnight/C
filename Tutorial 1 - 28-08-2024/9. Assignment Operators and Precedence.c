#include <stdio.h>
int main() {
int x = 5, y = 10;
y = x += 3 * 2;
printf("x: %d, y: %d\n", x, y);
return 0;
}
/*
Here's a detailed step-by-step solution:

1. int x = 5, y = 10; - Initialize two integer variables x and y with values 5 and 10, respectively.

2. y = x += 3 * 2; - Assign the result of the expression x += 3 * 2 to y.

Here's the order of operations:

a. 3 * 2 - Multiply 3 and 2, resulting in 6.

b. x += 6 - Add 6 to the current value of x (5), resulting in x becoming 11.

c. y = 11 - Assign the result of the expression (11) to y.

1. printf("x: %d, y: %d\n", x, y); - Print the values of x and y.

- x is now 11
- y is now 11

Output:

x: 11, y: 11

Here's the code with the output:

#include <stdio.h>
int main() {
    int x = 5, y = 10;
    y = x += 3 * 2;
    printf("x: %d, y: %d\n", x, y); // Output: x: 11, y: 11
    return 0;
}

This program demonstrates the use of assignment operators, arithmetic operations, and the order of operations in expressions.
*/
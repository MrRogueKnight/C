#include <stdio.h>
int main() {
int x = 10, y = 5;
if (x > y) {
if (x % 2 == 0) {
printf("x is even and greater than y.\n");
} else {
printf("x is odd and greater than y.\n");
}
} else {
printf("x is not greater than y.\n");
}
return 0;
}
/*
Here's a detailed step-by-step solution:

1. int x = 10, y = 5; - Initialize two integer variables x and y with values 10 and 5, respectively.

2. if (x > y) - Evaluate the expression inside the if statement.

Here's the order of operations:

a. x > y - Compare x (10) with y (5). Since 10 is greater than 5, this condition is true.

Since the if condition is true, the code inside the if block is executed.

1. if (x % 2 == 0) - Evaluate the expression inside the nested if statement.

Here's the order of operations:

a. x % 2 - Calculate the remainder of x (10) divided by 2, which is 0.

b. x % 2 == 0 - Compare the result (0) with 0. Since 0 is equal to 0, this condition is true.

Since the nested if condition is true, the code inside the nested if block is executed.

1. printf("x is even and greater than y.\n"); - Print the message.

Output:

x is even and greater than y.

Here's the code with the output:

#include <stdio.h>
int main() {
    int x = 10, y = 5;
    if (x > y) {
        if (x % 2 == 0) {
            printf("x is even and greater than y.\n"); // Output: x is even and greater than y.
        } else {
            printf("x is odd and greater than y.\n");
        }
    } else {
        printf("x is not greater than y.\n");
    }
    return 0;
}

This program demonstrates the use of nested if statements to evaluate multiple conditions and print a message based on the results.
*/
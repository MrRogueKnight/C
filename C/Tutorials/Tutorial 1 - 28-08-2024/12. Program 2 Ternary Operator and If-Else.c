#include <stdio.h>
int main() {
int num = 7;
if (num % 2 == 0) {
printf("%d is even.\n", num);
} else {
printf("%d is odd.\n", num);
}
return 0;
}
// Output: 7 is odd.
/*
Here's a detailed step-by-step solution:

1. int num = 7; - Initialize an integer variable num with value 7.

2. if (num % 2 == 0) - Evaluate the expression inside the if statement.

Here's the order of operations:

a. num % 2 - Calculate the remainder of num (7) divided by 2, which is 1.

b. num % 2 == 0 - Compare the result (1) with 0. Since 1 is not equal to 0, this condition is false.

Since the if condition is false, the code inside the else block is executed.

1. printf("%d is odd.\n", num); - Print the message with the value of num.

Output:

7 is odd.

Here's the code with the output:

#include <stdio.h>
int main() {
    int num = 7;
    if (num % 2 == 0) {
        printf("%d is even.\n", num);
    } else {
        printf("%d is odd.\n", num); // Output: 7 is odd.
    }
    return 0;
}

This program demonstrates the use of the modulo operator (%) to determine if a number is even or odd. If the remainder of a number divided by 2 is 0, it's even; otherwise, it's odd.
*/
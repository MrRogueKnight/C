#include <stdio.h>
int main() {
int age = 18;
char gender = 'M';
if (age >= 18 && gender == 'M') {
printf("The person is an adult male.\n");
} else {
printf("The person is not an adult male.\n");
}
return 0;
}
/*
Here's a detailed step-by-step solution:

1. int age = 18; - Initialize an integer variable age with value 18.

2. char gender = 'M'; - Initialize a character variable gender with value 'M'.

3. if (age >= 18 && gender == 'M') - Evaluate the expression inside the if statement.

Here's the order of operations:

a. age >= 18 - Compare age (18) with 18. Since 18 is greater than or equal to 18, this condition is true.

b. gender == 'M' - Compare gender ('M') with 'M'. Since 'M' is equal to 'M', this condition is true.

c. age >= 18 && gender == 'M' - Since both conditions are true, the logical AND operator (&&) evaluates to true.

Since the if condition is true, the code inside the if block is executed.

1. printf("The person is an adult male.\n"); - Print the message.

Output:

The person is an adult male.

Here's the code with the output:

#include <stdio.h>
int main() {
    int age = 18;
    char gender = 'M';
    if (age >= 18 && gender == 'M') {
        printf("The person is an adult male.\n"); // Output: The person is an adult male.
    } else {
        printf("The person is not an adult male.\n");
    }
    return 0;
}

This program demonstrates the use of logical operators (&&) to combine multiple conditions in an if statement.
*/
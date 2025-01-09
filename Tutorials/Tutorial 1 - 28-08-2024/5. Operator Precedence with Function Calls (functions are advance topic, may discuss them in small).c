#include <stdio.h>

int foo() {
    printf("Foo called\n");
    return 5;
}

int bar() {
    printf("Bar called\n");
    return 10;
}

int main() {
    int result = foo() + bar() * 2;
    printf("Result: %d\n", result);
    return 0;
}


/*#include <stdio.h>

int foo() {
 printf("Foo called\n");
 return 5;
}
int bar() {
 printf("Bar called\n");
 return 10;
}
int main() {
 int result = foo() + bar() * 2;
 printf("Result: %d\n", result);
 return 0;
}*/


/*
Here's a detailed step-by-step solution:

1. int foo() - Define a function foo that returns an integer.

2. printf("Foo called\n"); - Print "Foo called" to the console.

3. return 5; - Return the value 5 from the foo function.

4. int bar() - Define a function bar that returns an integer.

5. printf("Bar called\n"); - Print "Bar called" to the console.

6. return 10; - Return the value 10 from the bar function.

7. int main() - Define the main function where program execution begins.

8. int result = foo() + bar() * 2; - Call foo and bar functions and calculate the result.

Here's the order of operations:

- foo() is called, printing "Foo called" and returning 5.
- bar() is called, printing "Bar called" and returning 10.
- The return value of bar() (10) is multiplied by 2, resulting in 20.
- The return value of foo() (5) is added to the result of the multiplication (20), resulting in 25.

1. printf("Result: %d\n", result); - Print the final result to the console.

- %d is a placeholder for an integer value.
- result is the variable being printed, which has a value of 25.

1. return 0; - End the program and return 0 to indicate successful execution.

Output:

Foo called
Bar called
Result: 25

This program defines two functions, foo and bar, which print messages and return values. The main function calls these functions, performs calculations, and prints the final result.
*/

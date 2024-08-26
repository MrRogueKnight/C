/*
8. WAP to show BODMAS rule using integer and double.
*/
#include <stdio.h>

int main() {
    // Integer examples
    int intResult1 = 7 + (8 - 3 * 2); // Result: 9
    int intResult2 = 25 - 5 / (3 + 2); // Result: 20
    int intResult3 = 10 + 6 * (1 + 10); // Result: 76
    int intResult4 = 5 * (3 + 2) + 5; // Result: 30
    int intResult5 = 2 * (105 + 206) - 550 / 5; // Result: 412

    // Double examples
    double doubleResult1 = 1.0 / 3.0 * (6.0 + 8.0 * 3.0 - 2.0); // Result: 65.04
    double doubleResult2 = 18.0 / 10.0 - 4.0 + 32.0 / (4.0 + 10.0 / 2.0 - 1.0); // Result: 1.8

    // Print results
    printf("Integer results:\n");
    printf("1. %d\n2. %d\n3. %d\n4. %d\n5. %d\n", intResult1, intResult2, intResult3, intResult4, intResult5);

    printf("\nDouble results:\n");
    printf("1. %.2lf\n2. %.2lf\n", doubleResult1, doubleResult2);

    return 0; // Exit program
}

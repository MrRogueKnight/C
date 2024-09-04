//Q 4. Ternary Operator Question with Nested Ternary Operators:
#include <stdio.h>
int main() {
int x = 5, y = 10, z = 15;
int result = (x > y) ? ((x > z) ? x : z) : ((y > z) ? y : z);
printf("%d", result);
return 0;
}
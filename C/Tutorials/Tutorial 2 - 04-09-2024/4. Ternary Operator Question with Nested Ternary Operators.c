//Q 4. Ternary Operator Question with Nested Ternary Operators:
#include <stdio.h>
int main() {
int x = 5, y = 10, z = 15;
int result = (x > y) ? ((x > z) ? x : z) : ((y > z) ? y : z);
printf("%d", result);
return 0;
}
/**
Explanation: (x > y) ? ((x > z) ? x : z) : ((y > z) ? y : z)

1. (x > y) - This is the first comparison. If x is greater than y, then:
    - (x > z) - This is the second comparison. If x is greater than z, then x is assigned to result.
    - Otherwise, z is assigned to result.
2. If x is not greater than y (i.e., y is greater than or equal to x), then:
    - (y > z) - This is the third comparison. If y is greater than z, then y is assigned to result.
    - Otherwise, z is assigned to result.

This nested ternary operator is equivalent to the following if-else statements:

So x = 5, y = 10, z = 15 -> (5 > 10)- no then ((5 > 15)- no ? 5 : 10)- no : ((10 > 15)- no ? y : z) - 15 Result

int result;
if (x > y) {
	if (x > z) {
		result = x;
	} else {
		result = z;
	}
} else {
	if (y > z) {
		result = y;
	} else {
		result = z;
	}
}

*/

#include <stdio.h>
int main() {
 int x = 5, y = 3;
 int result = x & y | x << 1;
 printf("Result: %d\n", result);
 return 0;
}
/*
Here's a more detailed step-by-step solution:

1. x & y (bitwise AND operation)

x (5) in binary is 00000101
y (3) in binary is 00000011

Performing the bitwise AND operation:

  00000101 (x)
& 00000011 (y)
  ----
  00000001 (result)

So, x & y equals 1 in decimal.

1. x << 1 (left shift operation)

x (5) in binary is 00000101

Shifting the bits one position to the left:

  00000101 (x)
<< 1
  ----
  00001010 (result)

So, x << 1 equals 10 in decimal.

1. x & y | x << 1 (bitwise OR operation)

Performing the bitwise OR operation between the results of steps 1 and 2:

  00000001 (x & y)
| 00001010 (x << 1)
  ----
  00001011 (result)

So, x & y | x << 1 equals 11 in decimal.

Therefore, the final result is:

Result: 11

*/
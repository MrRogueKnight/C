#include <stdio.h>
int main() {
 int result = (5 + 10) * 2 - 8 / 4;
 printf("Result: %d\n", result);
 return 0;
}

/*
Let's break it down step by step:

1. (5 + 10): This is evaluated first because of the parentheses. It equals 15.
2. 15 * 2: This multiplies 15 by 2, resulting in 30.
3. 8 / 4: This divides 8 by 4, resulting in 2.
4. 30 - 2: This subtracts 2 from 30, resulting in 28.

Think of it like this:

- First, add 5 and 10 (5+10 = 15)
- Then, multiply 15 by 2 (15*2 = 30)
- Next, divide 8 by 4 (8/4 = 2)
- Finally, subtract 2 from 30 (30-2 = 28)

So, the final answer is 28
*/

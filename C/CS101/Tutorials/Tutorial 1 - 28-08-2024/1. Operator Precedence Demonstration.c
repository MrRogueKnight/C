#include <stdio.h>
int main() {
 int result = 5 + 10 * 2 - 8 / 4;
 printf("Result: %d\n", result);
 return 0;
}

/*
Let's break down the expression step by step:

1. 10 * 2: This multiplies 10 and 2, resulting in 20.
2. 5 + 20: This adds 5 and 20, resulting in 25.
3. 8 / 4: This divides 8 by 4, resulting in 2.
4. 25 - 2: This subtracts 2 from 25, resulting in 23.

So, the final result is 23.

Think of it like this:

- First, multiply 10 and 2 (10*2 = 20)
- Then, add 5 to that result (5 + 20 = 25)
- Next, divide 8 by 4 (8/4 = 2)
- Finally, subtract 2 from the previous result (25 - 2 = 23)

Therefore, the final answer is 23!
*/

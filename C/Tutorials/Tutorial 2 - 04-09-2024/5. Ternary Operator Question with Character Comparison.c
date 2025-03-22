//Q 5. Ternary Operator Question with Character Comparison:
#include <stdio.h>
int main() {
char grade = 'B';
char result = (grade == 'A') ? 'P' : ((grade == 'B') ? 'Q' : 'R');
printf("%c", result);
return 0;
}
/**
Output: Q
*/

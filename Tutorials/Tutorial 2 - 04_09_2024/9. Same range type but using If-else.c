//Q 9. Same range type but using If-else
#include <stdio.h>
int main() {
char letter = 'J';
if (letter >= 'A' && letter <= 'D') {
printf("Pass");
} else if (letter >= 'E' && letter <= 'H') {
printf("Average");
} else {
printf("Fail");
}
return 0;
}
/**
Output: Fail
*/

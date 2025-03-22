/**Q 1. If-Else Question:*/

#include <stdio.h>
int main() {
int x = 5;
if (x > 5)
printf("A");
else if (x > 3)
printf("B");
else if (x > 2)
printf("C");
else
printf("D");
return 0;
}

/**
Output:B
*/

/**Q 2. Switch Case Question:*/
#include <stdio.h>
int main() {
int num = 2;
switch (num) {
case 1:
printf("One ");
case 2:
printf("Two ");
case 3:
printf("Three ");
default:
printf("Default ");
}
return 0;
}
/**
Output: Two Three Default
*/

//Q 3. Nested If-Else Question:
#include <stdio.h>
int main() {
int x = 5, y = 10;
if (x > 3) {
if (y > 5)
printf("A");
else
printf("B");
} else {
printf("C");
}
return 0;
}

/**
Output: A
*/

//Q 4. Ternary Operator Question with Nested Ternary Operators:
#include <stdio.h>
int main() {
int x = 5, y = 10, z = 15;
int result = (x > y) ? ((x > z) ? x : z) : ((y > z) ? y : z);
printf("%d", result);
return 0;
}

/**
Output: 15
*/

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

//Q 6. Ternary Operator Question with Mixed Data Types:
#include <stdio.h>
int main() {
int x = 5;
char result = (x > 0) ? 'A' : 65;
printf("%c", result);
return 0;
}
/**
Output: A
*/

//Q 7. Switch Case with Ranges
#include <stdio.h>
int main() {
int score = 85;
switch (score / 10) {
case 9:
printf("A");
break;
case 8:
printf("B");
break;
case 7:
printf("C");
break;
case 6:
printf("D");
break;
default:
printf("F");
}
return 0;
}
/**
Output: B
*/


//Q 8. Switch Case with Ranges
#include <stdio.h>
int main() {
char letter = 'J';
switch (letter) {
case 'A' ... 'D':
printf("Pass");
break;
case 'E' ... 'H':
printf("Average");
break;
default:
printf("Fail");
}
return 0;
}
/**
Output: Fail
*/

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

//Q 10. Operator Precedence:
What is the result of the following expression?
int result = 5 + 10 * 2 / 2 - 3;

/**
Output: 12
*/

/*
Numbering mistake in the question bank after Q 10 Q 12 is there
*/

//Q 12. Combining Logical Operators:
//What is the value of `result` in the following code?
int x = 5, y = 10, result;
result = (x > 3) && (y < 15);

/**
Output: 1
*/

//Q 13. If-Else Statement:
//What will be the output of the following code?
int x = 10;
if (x > 5)
printf("A");
else if (x > 7)
printf("B");
else
printf("C");

/**
Output: A
*/

//Q 14. Switch Case:
//What will be the output of the following code?
char grade = 'B';
switch (grade) {
case 'A':
printf("Excellent");
break;
case 'B':
printf("Good");
break;
case 'C':
printf("Average");
break;
default:
printf("Invalid grade");
}
/**
Output: Good
*/

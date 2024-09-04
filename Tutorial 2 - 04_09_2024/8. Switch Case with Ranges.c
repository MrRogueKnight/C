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
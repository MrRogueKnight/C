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
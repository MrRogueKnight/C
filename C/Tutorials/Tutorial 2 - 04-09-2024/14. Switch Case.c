//Q 14. Switch Case:
//What will be the output of the following code?
#include<stdio.h>
int main(){
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
    return 0;
}

/**
Output: Good
*/

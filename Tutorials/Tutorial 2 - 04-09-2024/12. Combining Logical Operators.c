//Q 12. Combining Logical Operators:
//What is the value of `result` in the following code?
#include<stdlib.h>
int main(){
    int x = 5, y = 10, result;
    result = (x > 3) && (y < 15);
    printf("%d", result);
    return 0;
}
/**
Output: 1
*/

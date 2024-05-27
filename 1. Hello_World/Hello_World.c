// The following is the header file that includes the definition of the printf() function.
/*#include<stdio.h>
int main()
{
	printf("Hello World"); // The printf function prints the text written within it.
	return 0;
}
*/
/* Using Functions to Write Hello World Program

#include <stdio.h>

void printHelloWorld()
{
	printf("Hello, World!\n");
}

int main()
{
	printHelloWorld();
	return 0;
}

*/

/* C Hello World Using Character Variables
#include <stdio.h>

int main()
{
	char H = 'H';
	char e = 'e';
	char l1 = 'l';
	char l2 = 'l';
	char o = 'o';
	char space = ' ';
	char W = 'W';
	char o2 = 'o';
	char r = 'r';
	char d = 'd';

	printf("%c%c%c%c%c%c%c%c%c%c%c\n", H, e, l1, l2, o, space, W, o2, r, l1, d);

	return 0;
}
*/
/* Hello World in C Indefinitely*/

#include <stdio.h>

int main()
{
	for (;;)
	{
		printf("Hello, World!\n");
		printf("Hello, World!\n");
		printf("Hello, World!\n");
		printf("Hello, World!\n");
		printf("Hello, World!\n");
		printf("Hello, World!\n");
		printf("Hello, World!\n");
		printf("Hello, World!\n");
	}

	return 0;
}

#include <stdio.h>
// Function prototypes
void problem1();
void problem2();
void problem3();
void problem4();
void problem5();
void problem6();
void problem7();
void problem8();
void problem9();
void problem10();

int main() {
    int choice;
    char cont;
do
    {
    printf("Choose a problem to run:\n");
    printf("1. Distance Converter (Meter to Kilometer and Meter) \n");
    printf("2. First and Last Digit Sum Calculator \n");
    printf("3. Three-Digit Number Digit Sum Calculator\n");
    printf("4. Three-Digit Number Reverser\n");
    printf("5. Time Adder\n");
    printf("6. Character Checker \n");
    printf("7. Calculator Program \n");
    printf("8. Eligibility Checker Program\n");
    printf("9. Factor Finder Program\n");
    printf("10. Armstrong Number Checker Program\n");
    printf("Enter your choice (1-10): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            problem1();
            break;
        case 2:
            problem2();
            break;
        case 3:
            problem3();
            break;
        case 4:
            problem4();
            break;
        case 5:
            problem5();
            break;
        case 6:
            problem6();
            break;
        case 7:
            problem7();
            break;
        case 8:
            problem8();
            break;
        case 9:
            problem9();
            break;
        case 10:
            problem10();
            break;
        default:
            printf("Invalid choice. Exiting...\n");
           // return 1;
    }   printf("\nDo you want to continue? (y/n): ");
        scanf(" %c", &cont);

        while (cont != 'y' && cont != 'Y' && cont != 'n' && cont != 'N') {
            printf("Invalid input. Please enter 'y' or 'n': ");
            scanf(" %c", &cont);
        }
    } while (cont == 'y' || cont == 'Y');

    return 0;
}



//1. Distance Converter (Meter to Kilometer and Meter)
// Program to convert a distance in meter to its equivalent kilometer and meter
void problem1() {
    int meter; // variable to store the distance in meter
    printf("Enter the distance: ");
    scanf("%d", &meter); // input the distance from the user

    // calculate the kilometer and meter
    int km = meter / 1000;
    int m = meter % 1000;

    // print the result
    printf("%d meter = %d Km and %d meters.\n", meter, km, m);
}
//2. First and Last Digit Sum Calculator
// Program to find the sum of 1st and last digit of a six-digit number
void problem2(){
    int num; // variable to store the six-digit number
    printf("Enter the number: ");
    scanf("%d", &num); // input the number from the user

    // calculate the first and last digit
    int first_digit = num / 100000;
    int last_digit = num % 10;

    // calculate the sum
    int sum = first_digit + last_digit;

    // print the result
    printf("Sum of digits is: %d.\n", sum);
}
//3. Three-Digit Number Digit Sum Calculator
// Program to find the sum of all digits of a three-digit number
void problem3(){
    int num; // variable to store the three-digit number
    printf("Enter the number: ");
    scanf("%d", &num); // input the number from the user

    // initialize the sum variable
    int sum = 0;

    // calculate the sum of digits
    while (num != 0) {
        sum += num % 10;
        num /= 10;
    }

    // print the result
    printf("Sum of digits is: %d.\n", sum);
}
// 4. Three-Digit Number Reverser
// Program to reverse a three-digit number
void problem4() {
    int num; // variable to store the three-digit number
    printf("Enter the number: ");
    scanf("%d", &num); // input the number from the user

    // initialize the reversed number variable
    int reversed_num = 0;

    // reverse the number
    while (num != 0) {
        reversed_num = reversed_num * 10 + num % 10;
        num /= 10;
    }

    // print the result
    printf("Reversed number is: %d.\n", reversed_num);
}
//5. Time Adder
// Program to add two times in hour, minute, and second format
void problem5() {
    int hour1, min1, sec1, hour2, min2, sec2; // variables to store the two times
    printf("Enter two times: ");
    scanf("%d:%d:%d %d:%d:%d", &hour1, &min1, &sec1, &hour2, &min2, &sec2); // input the times from the user

    // calculate the total seconds
    int total_sec = (hour1 * 3600 + min1 * 60 + sec1) + (hour2 * 3600 + min2 * 60 + sec2);

    // calculate the hour, minute, and second
    int hour = total_sec / 3600;
    int min = (total_sec % 3600) / 60;
    int sec = total_sec % 60;

    // print the result
    printf("Output time is: %02d:%02d:%02d.\n", hour, min, sec);
}
//6. Character Checker
void problem6() {
    char ch;
    printf("Enter an alphabet: ");
    scanf(" %c", &ch);
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            printf("The entered character %c is a vowel.\n", ch);
        } else {
            printf("The entered character %c is a consonant.\n", ch);
        }
    } else {
        printf("The entered character %c is not an alphabet.\n", ch);
    }
}
//7. Calculator Program
// Program to input two integers and provide a menu to the user to select an operation
void problem7() {
    int num1, num2; // variables to store the two numbers
    printf("Enter 2 numbers: ");
    scanf("%d %d", &num1, &num2); // input the numbers from the user

    // display the menu
    printf("Select the operation from the menu\n");
    printf("(A for Add, S for Subtract, M for Multiplication, D for Division): ");

    char op; // variable to store the operation
    scanf(" %c", &op); // input the operation from the user

    // perform the operation
    switch (op) {
        case 'A':
            // add the numbers
            printf("The Sum is %d.\n", num1 + num2);
            break;
        case 'S':
            // subtract the numbers
            printf("The Difference is %d.\n", num1 - num2);
            break;
        case 'M':
            // multiply the numbers
            printf("The Product is %d.\n", num1 * num2);
            break;
        case 'D':
            // check for division by zero
            if (num2 != 0) {
                // divide the numbers
                printf("The Quotient is %d.\n", num1 / num2);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Invalid operation. Please select a valid operation.\n");
            break;
    }
}
//8. Program to determine the eligibility for admission based on the given criteria
void problem8() {
    int maths, phy, chem; // variables to store the marks in Maths, Physics, and Chemistry

    // input the marks from the user
    printf("Input the marks obtained in Physics: ");
    scanf("%d", &phy);
    printf("Input the marks obtained in Chemistry: ");
    scanf("%d", &chem);
    printf("Input the marks obtained in Mathematics: ");
    scanf("%d", &maths);

    // check the eligibility criteria
    if ((maths >= 65 && phy >= 55 && chem >= 50 && (maths + phy + chem >= 190 || maths + phy >= 140))) {
        printf("The candidate is eligible for admission.\n");
    } else {
        printf("The candidate is not eligible for admission.\n");
    }
}
// 9. Program to find the factors of a number
void problem9(){
    int n; // variable to store the number
    printf("Enter a number: ");
    scanf("%d", &n); // input the number from the user

    printf("The factors are: ");
    // find the factors
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");
}
// 10. Program to check if a number is an Armstrong number
void problem10() {
    int n; // variable to store the number
    printf("Enter a number: ");
    scanf("%d", &n); // input the number from the user

    int original_num = n; // store the original number
    int sum = 0; // variable to store the sum of cubes of digits

    // calculate the sum of cubes of digits
    while (n != 0) {
        int digit = n % 10;
        sum += digit * digit * digit;
        n /= 10;
    }

    // check if the number is an Armstrong number
    if (sum == original_num) {
        printf("The given number is Armstrong.\n");
    } else {
        printf("The given number is not Armstrong.\n");
    }
}

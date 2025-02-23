/*
Title  : Rupees and Paisa Conversion Utility - Enter Paisa Only
WAP to convert given Paisa into its equivalent Rupees and Paisa as per the following format.

Input  : Enter the Amount:550 Paisa
Output : 550 Paisa = 5 Rupees and 50 Paisa

Steps:
1. Taking input (Amount) form the user in Paisa.
2. Let's say : 550 Paisa  -> Break - 2 Parts : (550 Paisa = 5 Rupees and 50 Paisa)
3. Maths: 550 => 550/100 = 5.5 but int => 5  now we 550%100 = 55 which is Paisa.
*/
#include <stdio.h>
int main()
{
int Rupees, Paisa, Amount;                                           // Declaring the required variables
printf("Enter the Amount: ");                                        // Display the text
scanf("%d",&Amount);                                                 // Input
Rupees = Amount / 100; Paisa = Amount % 100;                         // Calculations
printf("%d Paisa = %d Rupees and %d Paisa",Amount, Rupees, Paisa);   // Output
getch();
return 0;
}

/**
Output:
Enter the Amount: 16546
16546 Paisa = 165 Rupees and 46 Paisa
*/

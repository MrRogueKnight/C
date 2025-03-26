/*
Topic : Profit/Loss Calculator: Determining Seller's Profit or Loss Based on Discount
The buying price, the marker price and discount are entered through keyboard. Sometimes seller gets profit or sometimes loss depending upon the discount
WAP to determine whether the seller has made profit or incurred loss. Also determine how much profit he made or loss he incurred
Input : Set 1: Enter the buying price: 80 Enter the marker price: 100. Enter the discount: 25% Output : Set 1: Seller made a loss of 6.25%
Input : Set 2: Enter the buying price: 80 Enter the marker price: 100 Enter the discount: 10%  Output : Set 2: Seller made a profit of 12.50%

Steps :
1. Declaring and Storing the variables as listed
2. Calculation of profit or loss => (marker price * ( 1- %discount) - buying price = profit / loss

for Set 1 : marker price =  100, buying price = 80 & discount = 25%
loss = 100 *(1 - 25%)- 80 = 75 - 80 = - 5
loss % = 5 / 80 * 100
*/
#include <stdio.h>
#include<math.h>

#include <stdio.h>
#include <math.h>

int main() {
    double bp, mp, discount, t;                             // bp - buying price, mp - marker price

    printf("Enter the buying price: ");
    scanf("%lf", &bp);

    printf("Enter the marker price: ");
    scanf("%lf", &mp);

    printf("Enter the discount: ");
    scanf("%lf", &discount);

    t = (mp * (1 - discount / 100) - bp);                   // Loss
    t =  (t / bp) *100;                                     // Loss Percentage

    if (t < 0) {
        printf("Seller incurred a loss of: %.2lf%%", -t);  // Print loss
    } else {
        printf("Seller made a profit of: %.2lf%%", t);     // Print profit
    }

    getch();
    return 0;
}

/**
Output:
Enter the buying price: 500
Enter the marker price: 650
Enter the discount: 13
Seller made a profit of: 13.10%
*/

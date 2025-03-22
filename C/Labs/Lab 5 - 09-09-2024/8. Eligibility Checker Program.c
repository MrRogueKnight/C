// Program to determine the eligibility for admission based on the given criteria

#include <stdio.h>

int main() {
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

    return 0;
}
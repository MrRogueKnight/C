/*
Title : Time Conversion Utility - Input Seconds Only
WAP to convert given Seconds into its equivalent Hours, Minutes and Seconds as per the following format.
Input : Enter the time:7560 Seconds
Output:7560 Second = 2 Hours, 06 Minutes and 40 Seconds
Steps:
1. Declaring the variables to take the input.
2. Using simple mathematics Calculations =>  1 Hour = 60 Minutes & 1 Minute = 60 Seconds
   Time = Hours * 3600 + Minutes * 60 + Seconds;
3. Printing the Output as per the format.
*/

#include <stdio.h>

int main() {
    float Time;
    int Minutes, Seconds, Hours;
    printf("Enter the time: ");
    scanf("%f", &Time);

    Hours = Time / 3600;
    Minutes =((Time / 3600) - (Hours))*60;            // or Minutes = ( Time % 3600 ) / 60;
    Seconds =(Time -(3600 * Hours)-(Minutes * 60));   // or Time % 60;

    printf("%.0f Seconds = %d Hours, %d Minutes, and %d Seconds\n", Time, Hours, Minutes, Seconds);
    getch();
    return 0;
}
